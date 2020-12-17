//
//  短絡評価_ex02.cpp
//  条件式(conditional expression)
//
//  Created by uneko on 2020/12/17.
//

#include "all.h"

int main(){
    auto a = [](){
        std::cout << "a\n"s;
        return true;
    };
    
    auto b = [](){
        std::cout << "b\n"s;
        return false;
    };
    
    bool c = a() || b();
    std::cout << std::boolalpha << c;
}
