//
//  関数_ex01.cpp
//  関数(function)
//
//  Created by uneko on 2020/12/12.
//

#include "all.h"

int main(){
    // 関数（ラムダ式）
    auto print = [](auto x){
        std::cout << x << "\n"s;
    };
    // [] ラムダ式導入部
    // () 引数
    // {} 本体
    
    // 関数呼び出し
    print(123);
    print(3.14);
    print("hello");
    
    return 0;
}
