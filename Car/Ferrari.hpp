/**
 @file Ferrari.hpp
 @brief has class Ferrari that extends class Car. everyone wants to own this.
**/

#pragma once
#ifndef Prius_hpp
#define Prius_hpp

#include <stdio.h>
#include "Car.hpp"
#endif /* Prius_hpp */

/**
 @class Ferrari 
 @brief extends Car class.
**/

class Ferrari: public Car{
    /**
     @brief implements doAccelarate. fast!!
    **/
    void doAccelarate();
    /**
     @brief implements doDeaccelarate.
    **/
    void doDeaccelarate();
    /**
     @brief implements doGetAccelarate.
    **/
    double doGetAccelarate();
};
