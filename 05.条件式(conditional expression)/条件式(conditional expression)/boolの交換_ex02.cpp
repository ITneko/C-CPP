//
//  boolの交換_ex02.cpp
//  条件式(conditional expression)
//
//  Created by uneko on 2020/12/17.
//

#include "all.h"

int main(){
    auto print = [](auto x){
        std::cout << x << "\n"s;
    };
    print(true + true);
    print(true + false);
    print(false + true);
    print(false + false);
}
