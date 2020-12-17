//
//  短絡評価_ex01.cpp
//  条件式(conditional expression)
//
//  Created by uneko on 2020/12/17.
//

#include "all.h"

int main(){
    auto a =[](){
        std::cout << "a\n"s;
        return false;
    };
    
    auto b = [](){
        std::cout << "b\n"s;
        return true;
    };
    
    bool c = a() && b();
    std::cout << std::boolalpha << c;
}
