#include <string>

#ifndef Operator_H
#define Operator_H

using namespace std;

// operator overloads
// <<

// =

// +

// -

// /

// *

// ++

class Operator {
  private:
   int num = 10;
   string name = "default";

  public:
   Operator();
   ~Operator();

   // getters
   int getNum();
   string getName();

   // setters
   void setNum(int n);
   void setName(string n);

   // actions
   void print();

   // operator overloads
   // void operator<<(Operator &op);

   void operator +(Operator &op);

   // ++prefix
   Operator& operator++();



};

#endif