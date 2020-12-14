//
//  論理積 : operator ||_ex02.cpp
//  条件式(conditional expression)
//
//  Created by uneko on 2020/12/14.
//

#include "all.h"

int main(){
    double height = 1.3;
    if((height < 1.1) || (height > 1.9)){
        std::cout << "No."s;
    }else{
        std::cout << "Yes."s;
    };
}
