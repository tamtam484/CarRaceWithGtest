//
//  Prius.hpp
//  
//
//  Created by 田村雄太 on 2017/06/28.
//
//

#pragma once
#ifndef Prius_hpp
#define Prius_hpp

#include <stdio.h>
#include "Car.hpp"
#endif /* Prius_hpp */

class Ferrari: public Car{
    void doAccelarate();
    void doDeaccelarate();
    double doGetAccelarate();
};
