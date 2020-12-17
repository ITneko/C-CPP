//
//  条件分岐_ex05.cpp
//  条件分岐
//
//  Created by uneko on 2020/12/13.
//

#include "all.h"

int main(){
    auto x = ""s;
    
    if("a"s < "b"s){
        x = "a"s;
    }else{
        x = "b"s;
    }
    
    std::cout << x;
}
