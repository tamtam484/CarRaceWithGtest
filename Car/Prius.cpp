//
//  Prius.cpp
//  
//
//  Created by 田村雄太 on 2017/06/28.
//
//

#include "Prius.hpp"
#include <iostream>
void Prius::doAccelarate(){
    this->_a += 1;
}

void Prius::doDeaccelarate(){
    this->_a -= 1;
}

double Prius::doGetAccelarate(){
    std::cout<<"電子制御" <<std::endl;
    return this->_a;
}
