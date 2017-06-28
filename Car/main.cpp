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

int main(){
    //do race;
    
    int carno1,carno2;
    std::cin>>carno1>>carno2;
    
    MonacoGrandPrix mp(car1,car2);
    mp.race();
}
