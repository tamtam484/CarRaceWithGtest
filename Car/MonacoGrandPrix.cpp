//
//  MonacoGrandPrix.cpp
//  Car
//
//  Created by 田村雄太 on 2017/06/28.
//  Copyright © 2017年 田村雄太. All rights reserved.
//

#include "MonacoGrandPrix.hpp"
#include<iostream>


MonacoGrandPrix::MonacoGrandPrix(Car& e1, Car& e2):_e1(e1),_e2(e2){}

void MonacoGrandPrix::race(){
    this->_e1.accelarate();
    this->_e2.accelarate();
    bool e1wins = (this->_e1.getaccelarete() > this->_e2.getaccelarete());
    if(e1wins){
        std::cout<<"e1 wins!"<<std::endl;
    }else{
        std::cout<<"e2 wins!"<<std::endl;
    }
}
