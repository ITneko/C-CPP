//
//  関数_ex03.cpp
//  関数(function)
//
//  Created by uneko on 2020/12/12.
//

#include "all.h"

int main(){
    auto plus = [](auto x, auto y){
        return x+y;
    };
    
    std::cout
    << plus(1,2) << "\n"s
    << plus(1.5, 0.5) << "\n"s
    << plus("123"s, "456"s) << "\n"s;
    
    auto f = [](){
        std::cout << "f is called.\n"s;
        return 0;   // ここで処理が戻る
        std::cout << "f returned zero.\n";
    };
    
    auto result = f();
    
    std::cout << result;
}
