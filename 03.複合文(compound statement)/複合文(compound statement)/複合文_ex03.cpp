//
//  複合文_ex03.cpp
//  複合文(compound statement)
//
//  Created by uneko on 2020/12/13.
//

#include "all.h"

int main(){
    auto x = 0;
    {
        auto x = 1;
        {
            auto x = 2;
            std::cout << x << "\n"s;
        }
        std::cout << x << "\n"s;
        x=42;
        std::cout << x << "\n"s;
    }
    std::cout << x;
}
