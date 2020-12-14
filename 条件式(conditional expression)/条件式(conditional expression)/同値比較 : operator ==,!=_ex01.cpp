//
//  同値比較 : operator ==,!=_ex01.cpp
//  条件式(conditional expression)
//
//  Created by uneko on 2020/12/14.
//

#include "all.h"

int main(){
    std::cout << std::boolalpha;
    auto print = [](auto b){
        std::cout << b << "\n"s;
    };
    
    print(true == true);
    print(true == false);
    print(false == true);
    print(false == false);
    
    print(true != true);
    print(true != false);
    print(false != true);
    print(false != false);
}
