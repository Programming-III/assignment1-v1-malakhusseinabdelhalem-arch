#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include <iostream>
#include <String>
#include "Animal.h"

class Enclosure:public Animal{
  private :
    Animal*animal;
    int capacity;
    int currentCount;
  public:
  Enclousre(Animal*animal ,int capacity, int currentCount){
    this->animal=animal;
    this->capacity=capacity;
    this->currentCount=currentCount;
    
  }
  void addAnimal(Animal * a){
    
  }
  void displayAnimals(){
    
  }
};

  

#endif 
