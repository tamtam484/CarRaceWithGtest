//
//  Car.hpp
//  
//
//  Created by 田村雄太 on 2017/06/28.
//
//
#pragma once
#ifndef Car_hpp
#define Car_hpp
#include <stdio.h>
#endif /* Car_hpp */

class Car{
public:
    double _a,_v,_x;
    void accelarate() ;
    void deaccelarate();
    double getaccelarete();
    
    
    
private:
    virtual void doAccelarate() = 0;
    virtual void doDeaccelarate() = 0;
    virtual double doGetAccelarate() = 0;
};
