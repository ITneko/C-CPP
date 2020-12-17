//
//  変数_ex02.cpp
//  cpp
//
//  Created by uneko on 2020/12/12.
//

#include "all.h"

int main(){
    auto x = 1;
    // エラー
//    x = "hello"s;
    x = 2;
    
    // ｉはint型
    auto i = 123;
    
    // dはdouble型
    auto d = 1.23;
    
    // sはstd::string型
    auto s = "123"s;
    
    return 0;
}
