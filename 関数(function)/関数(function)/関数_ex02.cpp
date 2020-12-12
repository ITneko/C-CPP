//
//  関数_ex02.cpp
//  関数(function)
//
//  Created by uneko on 2020/12/12.
//

#include "all.h"

int main(){
    auto twice = [](auto x){
        std::cout << x << " "s << x << "\n"s;
    };
    
    twice(5);
    
    
    auto print_two = [](auto x, auto y){
        std::cout << x << " "s << y << "\n"s;
    };
    
    print_two(1, 2);
    print_two("Pi is", 3.14);
    
    
    auto no_args = [](){
        std::cout << "Nothing.\n";
    };
    
    no_args();
    
    
    // 何もしない関数
    auto func = [](){};
    
    // operator ()の適用
    func();
    
    // これもoperator ()
    func    (    );
    
    // 変数fをラムダ式で初期化
    auto f = [](){};
    // 変数fを関数呼び出し
    f();
    
    // ラムダ式を関数呼び出し
    [](){}();
    
}
