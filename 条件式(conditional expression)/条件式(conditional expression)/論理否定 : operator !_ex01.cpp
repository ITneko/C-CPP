//
//  論理否定 : operator !_ex01.cpp
//  条件式(conditional expression)
//
//  Created by uneko on 2020/12/14.
//


#include "all.h"

bool is_rocket_ready_to_launch(){
    return false;
}

int main(){
    std::cout << std::boolalpha;
    
    // false
    std::cout << !true << "\n"s;
    
    //true
    std::cout << !false << "\n"s;
    
    // ロケットが発射可能ではないとき実行される
    if(!is_rocket_ready_to_launch()){
        std::cout << "Standby..\n"s;
    }
}
