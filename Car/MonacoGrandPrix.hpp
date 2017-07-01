/**
 @file MonacoGrandPrix.hpp
 @brief class MonacoGrandPrix that contains functions for racing
 **/
#pragma once
#ifndef MonacoGrandPrix_hpp
#define MonacoGrandPrix_hpp

#include <stdio.h>
#include "Car.hpp"
#endif /* MonacoGrandPrix_hpp */

/**
 @class MonacoGrandPrix
 @brief racing facilities for monaco grandprix.
 **/
class MonacoGrandPrix{
    /**
     @var _e1 #1 entry car
     @var _e2 #2 entry car
     **/
    Car &_e1,&_e2; //ASK MORISAN koredeiino
public:
    
    /**
     @brief constructor.
     @parm e1 #1 entried car
     @parm e2 #2 entried car
    **/
     MonacoGrandPrix(Car& e1, Car& e2);

    /**
       @brief do race and print results.
       @detail accelarate and break some time, and compare some fields to decide winner.
    **/
    void race();

    
};
