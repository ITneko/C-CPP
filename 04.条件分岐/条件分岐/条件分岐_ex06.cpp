//
//  条件分岐_ex06.cpp
//  条件分岐
//
//  Created by uneko on 2020/12/13.
//

#include "all.h"

int main(){
    auto x = ""s;
    if("aa"s < "ab"s){
        x = "aa"s;
    }else{
        x = "ab"s;
    }
    
    std::cout << x;
}
