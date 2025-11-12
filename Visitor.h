#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <String>
using namespace std;

class Visitor {
  private:
    String visitorName;
    int ticketBought;
  public:
    Visitor (String visitorName,int ticketBought){
      this->visitorName = visitorName;
      this->ticketBought=ticketBought;
      
    }
    void displayInfo(){
      
    }
};
#endif
