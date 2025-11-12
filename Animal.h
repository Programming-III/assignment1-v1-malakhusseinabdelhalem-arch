#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <String>

using namespace std;

class Animal {
  private:
    String name;
    int age;
    boolean isHungry;
  public:
    Animal (String name ,int age, boolean isHungry){
      this->name = name;
      this->age = age;
      this->isHungry =isHungry;
    }
  void display() {
    cout<< "Animal's name = "<< name <<"his age:"<<age<<"The animal is :"<<isHungry<<endl; 
  }
  void feed(){
    if (isHungry == true){
      cout << "Tested ! the Animal is hungary"<<endl;
    }else{
      cout << "Tested ! the Animal is not hungary"<<endl;
    }
    
  }
};
#endif

