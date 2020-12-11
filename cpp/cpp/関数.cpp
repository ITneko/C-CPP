//
//  関数.cpp
//  cpp
//
//  Created by uneko on 2020/12/11.
//

#include "all.h"

int main(){
    // 整数の変数
    auto answer = 42;
    std::cout << answer << "\n"s;
    
    // 浮動小数点数の変数
    auto pi = 3.14;
    std::cout << pi << "\n"s;
    
    //　文字列の変数
    auto question = "Life , The Universe, and Everything."s;
    std::cout << question;
    
//    auto 変数名 = 値;
    
    auto a = 1;
    auto b(2);
    auto c{3};
//    =(){}による変数の初期値の指定を、初期化という。
    
//    std::cout << x; xは宣言されていないからエラー
    auto x = 123;
    // 変数の宣言
    // 初期化
    // 123
    std::cout << x;
    
    //　代入
    x = 456;
    std::cout << x;
    
    // もう一度代入
    x = 789;
    std::cout << x;
}
