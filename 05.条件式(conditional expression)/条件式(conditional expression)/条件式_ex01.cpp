//
//  条件式_ex01.cpp
//  条件式(conditional expression)
//
//  Created by uneko on 2020/12/14.
//

#include "all.h"

int main(){
    auto a = 1 == 1;
    auto b = 1 != 1;
    std::cout << a << "\n"s << b << "\n"s;
    
    if(1) std::cout << "1\n"s;
    if(0) std::cout << "0\n"s;
    if(123) std::cout << "123\n"s;
    if(-1) std::cout << "-1"s;
}
