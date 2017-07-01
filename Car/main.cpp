//
//  main.cpp
//  
//
//  Created by 田村雄太 on 2017/06/28.
//
//
#include <stdio.h>
#include <iostream>

#include "Prius.hpp"
#include "Ferrari.hpp"
#include "MonacoGrandPrix.hpp"


/**
 @brief helds monaco grand prix!!
 @return 0 if monaco grand prix successfully held
**/
int main(){
    //do race;
    Prius car1; //FIXME default constructor needs no ()s??
    Ferrari car2;
    MonacoGrandPrix mp(car1,car2);
    mp.race();
    return 0;
}
