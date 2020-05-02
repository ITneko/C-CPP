#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>

int OnlyNum = 1000;

typedef struct node{
	int Num, kor, eng, math, sum;
	double arv;
	char name[20];
	struct node* link;
}DB;

DB* Get_Node(){
	DB* tmp;
	tmp = (DB*)malloc(sizeof(DB));
	tmp->link = NULL;
	return tmp;
}

void Insert_Node(DB** head){
	if (*head == NULL){
		*head = Get_Node();

		printf("학생이름 : ");	
		scanf("%s", (*head)->name);

		printf("%s 학생 국어 : ", (*head)->name);
		scanf("%d", &(*head)->kor);
		fflush(stdin);

		printf("%s 학생 영어 : ", (*head)->name);
		scanf("%d", &(*head)->eng);
		fflush(stdin);

		printf("%s 학생 수학 : ", (*head)->name);
		scanf("%d", &(*head)->math);
		fflush(stdin);

		(*head)->Num = OnlyNum;
		(*head)->sum = (*head)->kor + (*head)->eng + (*head)->math;
		(*head)->arv = ((*head)->sum) / 3.0;
		OnlyNum++;
		return;
	}
	else
		Insert_Node(&(*head)->link);
}


void Output(DB** head){
	if ((*head)){
		printf("\t%d\t%s\t%d\t%d\t%d\t%d\t%.2f\n ", (*head)->Num, (*head)->name, (*head)->kor, (*head)->eng, (*head)->math, (*head)->sum, (*head)->arv);
		Output(&(*head)->link);
	}
}

void DCountNum(DB** head){
	if (!(*head))
		return;

	if ((*head)->Num == OnlyNum)
		return;

	if ((*head)->Num < OnlyNum){
		(*head)->Num -= 1;
		DCountNum(&(*head)->link);
	}
	return;
}

void Delete_Node(DB** head, DB** p){
	if (!(*head)){
		printf("해당번호는 존재하지 않습니다.\n계속하려면 아무 키나 누르십시오...\n");
		return;
	}

	if ((*head)->Num == (*p)->Num){
		DB* tmp;
		tmp = *head;
		*head = tmp->link;
		free(tmp);

		printf("삭제되었습니다.\n계속하려면 아무 키나 누르십시오...\n");
		DCountNum(&(*head));
		OnlyNum--;
		return;
	}
	Delete_Node(&(*head)->link, &(*p));
}

void Search_name(DB** head, DB** p){
	if (!strcmp((*head)->name, (*p)->name)){
		printf("<<=== 학생 정보 출력 ===>>\n");
		printf("\t번호\t이름\t국어\t영어\t수학\t합계\t평균\n");
		printf("\t%d\t%s\t%d\t%d\t%d\t%d\t%.2f\n ", (*head)->Num, (*head)->name, (*head)->kor, (*head)->eng, (*head)->math, (*head)->sum, (*head)->arv);
		return;
	}
	else{
		if ((*head)->link == NULL){
			printf("해당 학생은 존재하지 않습니다.\n");
			return;
		}
		Search_name(&(*head)->link, &(*p));
	}
}

void Search_Edit(DB** head, DB** p){
	if (!(*head)){
		printf("해당번호는 존재하지 않습니다...\n계속하려면 아무 키나 누르십시오...\n");
		return;
	}
	if ((*head)->Num == (*p)->Num){
		memcpy((*head)->name, (*p)->name, strlen((*p)->name) + 1);
		(*head)->kor = (*p)->kor;
		(*head)->eng = (*p)->eng;
		(*head)->math = (*p)->math;
		(*head)->sum = (*p)->sum;
		(*head)->arv = (*p)->arv;
		printf("수정이 완료 되었습니다...\n계속하려면 아무 키나 누르십시오...\n");
		return;
	}
	else{
		if ((*head)->link == NULL)
		{
			printf("해당번호는 존재하지 않습니다...\n계속하려면 아무 키나 누르십시오...\n");
			return;
		}
		Search_Edit(&(*head)->link, &(*p));
	}
}

void CountNum(DB** head){
	(*head)->Num += 1;

	if (!(*head))
		return;

	if ((*head)->Num == OnlyNum){
		OnlyNum++;
		return;
	}
	else
		CountNum(&(*head)->link);

	return;
}

void Add_Node(DB** head, DB** p){
	DB* tmp;

	if (!(*head)){
		printf("삽입이 불가능합니다.\n계속하려면 아무 키나 누르십시오...\n");
		return;
	}

	if ((*head)->Num == (*p)->Num){
		tmp = (*head)->link;
		(*head)->link = Get_Node();
		(*head)->link->Num = (*head)->Num;
		(*head)->link->kor = (*head)->kor;
		(*head)->link->eng = (*head)->eng;
		(*head)->link->math = (*head)->math;
		(*head)->link->sum = (*head)->sum;
		(*head)->link->arv = (*head)->arv;
		memcpy((*head)->link->name, (*head)->name, strlen(((*head)->name)) + 1);
		(*head)->link->link = tmp;
		
		printf("학생이름 : ");
		scanf("%s", (*head)->name);
		fflush(stdin);

		printf("%s 학생 국어 : ", (*head)->name);
		scanf("%d", &(*head)->kor);
		fflush(stdin);

		printf("%s 학생 영어 : ", (*head)->name);
		scanf("%d", &(*head)->eng);
		fflush(stdin);

		printf("%s 학생 수학 : ", (*head)->name);
		scanf("%d", &(*head)->math);
		fflush(stdin);

		(*head)->Num = (*p)->Num;
		(*head)->sum = (*head)->kor + (*head)->eng + (*head)->math;
		(*head)->arv = ((*head)->sum) / 3.0;
		CountNum(&(*head)->link);

		printf("계속하려면 아무 키나 누르십시오...\n");

		return;
	}
	else{
		if ((*head)->link == NULL){
			printf("삽입이 불가능합니다...\n계속하려면 아무 키나 누르십시오...\n");
			return;
		}
		Add_Node(&(*head)->link, &(*p));
	}
}




int main(){
	int num;
	DB* head = NULL;
	DB* p = (DB*)malloc(sizeof(DB));
	system("title ★student manager GwonHyeokjin★");

	while (1) {
		printf("<=== student manager ===>\n");
		printf("1. 학생 정보 출력\n");
		printf("2. 학생 정보 입력\n");
		printf("3. 학생 정보 수정\n");
		printf("4. 학생 정보 삭제\n");
		printf("5. 학생 정보 삽입\n");
		printf("6. 학생 정보 검색\n");
		printf("7. 학생 정보 종료\n");
		printf("선택 : ");
		scanf("%d", &num);
		fflush(stdin);

		switch (num){
		case 1:
			if (head == NULL){
				printf("Data가 존재하지 않습니다...\n계속하려면 아무 키나 누르십시오...\n");
			}
			else{
				printf("<<=== 학생 정보 출력 ===>>\n");
				printf("\t번호\t이름\t국어\t영어\t수학\t합계\t평균\n");
				Output(&head);
				printf("\n계속하려면 아무 키나 누르십시오...\n");
			}
			_getch();
			fflush(stdin);
		 break;

		case 2:
			Insert_Node(&head);
			printf("입력이 완료 되었습니다.\n계속하려면 아무 키나 누르십시오...\n");
			_getch();
			fflush(stdin);
		 break;

		case 3:
			printf("수정할 학생 번호를 입력하세요 : ");
			scanf("%d", &p->Num);
			fflush(stdin);

			printf("학생이름 : ");
			scanf("%s", p->name);
			fflush(stdin);

			printf("%s 학생 국어 : ", p->name);
			scanf("%d", &p->kor);
			fflush(stdin);

			printf("%s 학생 영어 : ", p->name);
			scanf("%d", &p->eng);
			fflush(stdin);

			printf("%s 학생 수학 : ", p->name);
			scanf("%d", &p->math);
			fflush(stdin);
			
			p->sum = p->kor + p->eng + p->math;
			p->arv = (p->sum) / 3.0;
			Search_Edit(&head, &p);
			_getch();
			fflush(stdin);
		 break;

		case 4:
			printf("삭제 할 학생 번호를 입력하세요 :  ");
			scanf("%d", &p->Num);
			fflush(stdin);

			Delete_Node(&head, &p);

			_getch();
			fflush(stdin);
		 break;

		case 5:
			printf("번호 선택 : ");
			scanf("%d", &p->Num);
			fflush(stdin);

			if (p->Num < 1000){
				printf("삽입이 불가능합니다.\n");
				_getch();
				break;
			}
			else
				Add_Node(&head, &p);

			_getch();
			fflush(stdin);
		break;


		case 6:
			if (head == NULL){
				printf("저장된 데이터가 없습니다...\n계속하려면 아무 키나 누르십시오...\n");
				_getch();
				break;
			}
			else{
				printf("찾을 학생의 이름을 입력 : ");
				scanf("%s", p->name);
				fflush(stdin);

				Search_name(&head, &p);

				printf("계속하려면 아무 키나 누르십시오...\n");
				_getch();
				fflush(stdin);
			}
		break;

		case 7: 	
			exit(0);
		}
		system("cls");
	}
	return 0;
}