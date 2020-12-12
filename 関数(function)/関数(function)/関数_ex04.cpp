//
//  関数_ex04.cpp
//  関数(function)
//
//  Created by uneko on 2020/12/12.
//

int plus(int x, int y){
    return x+y;
}

double plus(double x, double y){
    return x+y;
}

#include "all.h"

int main(){
    auto x = plus(1, 2);
    auto y = plus(1.1, 2.2);
    
    std::cout << x << " "s << y;
    
}
