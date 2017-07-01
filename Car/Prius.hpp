/**
 @file Prius.hpp
 @brief contains class Prius that extends Car and accelarates by electricity and fuel power.
**/
#pragma once
#ifndef Prius_hpp
#define Prius_hpp

#include <stdio.h>
#include "Car.hpp"
#endif /* Prius_hpp */

/**
 @class Prius
 @brief extending Car and makes movements by electricity and fuel powers.
**/
class Prius: public Car{
private:
    /**
     @brief implements doAccelarate. makes accelarate.
    **/
    void doAccelarate();
    /**
     @brief implements doDeaccelarate. typical deaccelarate.
    **/
    void doDeaccelarate();
    
    /**
     @brief implements doGetAccelarate. 
     @return (accelarate)
    **/
    double doGetAccelarate();
};
