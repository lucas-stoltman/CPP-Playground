#ifndef Operator_H
#define Operator_H

// operator overloads
// <<

// =

// +

// -

// /

// *

class Operator {
  private:
   int num = 10;

  public:
   Operator();
   ~Operator();

   // getters
   int getNum();

   // setters
   void setNum(int n);

   // actions
   void printNum();
};

#endif