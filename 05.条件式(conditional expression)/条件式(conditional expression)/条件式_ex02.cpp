//
//  条件式_ex02.cpp
//  条件式(conditional expression)
//
//  Created by uneko on 2020/12/14.
//

#include "all.h"

int main(){
    auto a = 1 == 1; // bool
    bool A = 1 == 1; // 型を書いても良い
    
    bool correct = true;
    bool wrong = false;
    
    std::cout << std::boolalpha;
    std::cout << true << "\n"s << false << "\n"s;
    std::cout << std::noboolalpha;
    std::cout << correct << "\n"s << wrong;
    
}
