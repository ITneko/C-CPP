//
//  main.cpp
//  BMI計算
//
//  Created by uneko on 2020/12/17.
//

#include "all.h"

int main(int argc, const char * argv[]) {
    // ちなみに本人ではない！
    double height = 1.63;
    double mass = 73;
    
    double bmi = mass/(height*height);
    std::cout << "BMI="s << bmi << "\n"s;
    
    auto status = [](double bmi){
        if(bmi < 18.5){
            return "たくさん食べてもっと太ってくださいね！"s;
        }else if(bmi < 25){
            return "普通ですね。この状態でいいですよ！"s;
        }else if(bmi < 30){
            return "ちょっと太り気味ですね。少し痩せた方がいいですよ！"s;
        }else{
            return "ハンバーガー最大何個食える？今から私とトレーニング！"s;
        }
    };
    std::cout << status(bmi);
}
