//
//  条件分岐_ex04.cpp
//  条件分岐
//
//  Created by uneko on 2020/12/13.
//

#include "all.h"

int main(){
    auto cat = "cat"s;
    auto dog = "dog"s;
    
    if(cat < dog){
        std::cout << "cat is smaller.\n"s;
    }else{
        std::cout << "dog is smaller.\n";
    }
    
    auto longcat = "longcat"s;
    
    if(longcat > cat){
        std::cout << "Longcat is Looong.\n"s;
    }else{
        std::cout << "Longcat isn't that long. Sigh.\n"s;
    }
}
