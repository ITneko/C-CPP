//
//  整数と浮動小数点数.cpp
//  cpp copy
//
//  Created by uneko on 2020/12/11.
//

#include "all.h"

int main(){
    std::cout << "Integer: "s << 42 << "\n"s;
    std::cout << "Floating Point: "s << 3.14 << "\n"s;
    
    std::cout << 3 + 5 << " "s << 3 - 5 << " "s
    << 3 * 5 << " "s << 3 / 5 << " "s << 3 % 5 << "\n"s;
    
    // 7
    std::cout << 1 + 2 * 3 << " "s;
    
    // 9
    std::cout << (1+2) * 3 << "\n"s;
    
    std::cout << 3.5 + 7.11 << " "s
    << 3.5 - 7.11 << " "s
    << 3.5 * 7.11 << " "s
    << 3.5 / 7.11 << "\n"s;
//    << 3.5 % 7.11 << "\n"s; 浮動小数点は剰余できない。
    
    std::cout << 1 + 0.1 << " "s;
//    std::cout << 1 + "234"s;
    std::cout << 1 + "234"; // 結果として３４が出力される。
    return 0;
}
