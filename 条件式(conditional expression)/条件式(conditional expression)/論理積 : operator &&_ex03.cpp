//
//  論理積 : operator &&_ex03.cpp
//  条件式(conditional expression)
//
//  Created by uneko on 2020/12/14.
//

#include "all.h"

int main(){
    double temperature = 36.6;
    
    if((temperature>=36.1) && (temperature<=37.2)){
        std::cout << "Good\n"s;
    }else{
        std::cout << "Bad\n"s;
    }
}
