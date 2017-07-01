/**
    @file Car.hpp
    @brief contains abstract class Car that can accelarate and break and get paramators
**/
#pragma once
#ifndef Car_hpp
#define Car_hpp
#include <stdio.h>
#endif /* Car_hpp */


/**
    @class Car
    @brief abstract class that defines essential methods for Carrace.
 **/
class Car{
public:
    /**
     @var _a
     @brief present accelarate
    **/
    double _a;
    /**
     @var _v
     @brief present velocity
    **/
    double _v;
    /**
    @parm _x
    @brief present net movements
    **/
    double _x;
    
    /**
     @brief calls doAccelarate
     **/
    void accelarate() ;
    
    /**
     @brief calls doDeAccelarate
     **/
    void deaccelarate();
    
    /**
     @brief calls doGetAccelarate
    **/
    double getaccelarete();
    
    
    
private:
    /**
     @brief Accelarate his car.
    **/
    virtual void doAccelarate() = 0;
    /**
     @brief doAccelarate his car.
    **/
    virtual void doDeaccelarate() = 0;
    /**
     @brief getAccelarate value
     **/
    virtual double doGetAccelarate() = 0;
};
