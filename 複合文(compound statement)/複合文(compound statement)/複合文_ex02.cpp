//
//  複合文_ex02.cpp
//  複合文(compound statement)
//
//  Created by uneko on 2020/12/13.
//

#include "all.h"

int main(){
    auto a = 1;
    std::cout << a << "\n"s;
    {
        auto b = 2;
        std::cout << a << " "s << b << "\n"s;
        {
            auto c = 3;
            std::cout << a << " "s << b << " "s << c << "\n"s;
            // cはここまで使える
        }
        // bはここまで使える
    }
    // aはここまで使える
}
