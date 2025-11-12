#ifndef MAMMAL_H
#define MAMMAL_H

#include <iostream>
#include <String>
#include "Animal.h"

using namespace std;

class Mammal :public Animal () {
  private :
    String furcolor;
public:
  Mammal ()::Animal(){
  }

};


#endif 
