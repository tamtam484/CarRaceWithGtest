//
//  MonacoGrandPrix.hpp
//  Car
//
//  Created by 田村雄太 on 2017/06/28.
//  Copyright © 2017年 田村雄太. All rights reserved.
//
#pragma once
#ifndef MonacoGrandPrix_hpp
#define MonacoGrandPrix_hpp

#include <stdio.h>
#include "Car.hpp"
#endif /* MonacoGrandPrix_hpp */


class MonacoGrandPrix{
    Car &_e1,&_e2; //ASK MORISAN koredeiino
public:
    MonacoGrandPrix(Car& e1, Car& e2);
    void race();
    
};
