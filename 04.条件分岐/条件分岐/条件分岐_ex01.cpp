//
//  条件分岐_ex01.cpp
//  条件分岐
//
//  Created by uneko on 2020/12/13.
//

#include "all.h"

int main(){
    auto a = 12345 + 6789;
    auto b = 8073 * 132 / 5;
    auto sum = a+b;
    
    std::cout
    << "a = 12345 + 6789 = " << a << "\n"s
    << "b = 8073 * 132 / 5 = " << b << "\n"s
    << "a+b = " << sum;
    
    std::cout << "\n\n"s;
    if(a<b){
        std::cout << b;
    }else{
        std::cout << a;
    }
    
    if(2<1)
        std::cout << "sentence 1.\n";
    std::cout << "sentence 2.\n";
    
    if(1<2){
        std::cout << "yes!\n";
        std::cout << "yes!\n";
    }
}
