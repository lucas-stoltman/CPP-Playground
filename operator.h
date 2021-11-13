#include <string>

#ifndef Operator_H
#define Operator_H

using namespace std;
class Operator {
  private:
   int num = 10;
   string name = "default";

  public:
   // defaut, just a string, or string and num
   Operator(string newName="default", int n = 10);
   // just num
   Operator(int n);

   ~Operator();

   // getters
   int getNum();
   string getName();

   // setters
   void setNum(int n);
   void setName(string n);

   // actions
   void print();

   // ------------------------------------
   // operator overloads
   // ------------------------------------

   // <<
   // void operator<<(Operator &op);

   // =
   void operator=(int integer);

   // +
   void operator+(int integer);
   // object addition
   int operator+(Operator& op1);

   // ++prefix
   Operator& operator++();

   // -
   void operator-(int integer);
   // object subtraction
   int operator-(Operator& op1);


   // /
   void operator/(int integer);

   // *
   void operator*(int integer);
};

#endif