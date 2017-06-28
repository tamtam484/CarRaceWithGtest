//
//  Prius.cpp
//  
//
//  Created by 田村雄太 on 2017/06/28.
//
//

#include "Ferrari.hpp"
#include <iostream>

void Ferrari::doAccelarate(){
    this->_a += 10;
}

void Ferrari::doDeaccelarate(){
    this->_a -= 2;
}

double Ferrari::doGetAccelarate(){
    std::cout<<"ぶおおおおおおおおおおおおん"<<std::endl;
    return this->_a;
}
