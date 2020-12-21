//
//  標準入力_ex04.cpp
//  標準入力
//
//  Created by uneko on 2020/12/21.
//

#include "all.h"

int main(){
    bool b{};
    std::cin >> b;
    bool b2{};
    std::cin >> std::boolalpha >> b2;
    
    std::cout << std::boolalpha << b << "\n"s << b2;
}
