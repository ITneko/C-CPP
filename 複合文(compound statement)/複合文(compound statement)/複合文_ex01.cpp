//
//  複合文_ex01.cpp
//  複合文(compound statement)
//
//  Created by uneko on 2020/12/13.
//

#include "all.h"

int main(){
    // 複合文開始
    {
        std::cout << "hello\n"s;
        std::cout << "hello\n"s;
    }//　複合文終了
    
    //　別の複合文
    {std::cout << "hello\n"s;}
    
    // 空の複合文
    {}
    
    {{{}}}
}
