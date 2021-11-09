// Initialized by Lucas Stoltman October 31st 2021

#include <iostream>
#include <string>

#include "basic.h"

using namespace std;

// class Test {

// }

// this method will allow the return type to change
string& returnString(string& s) { return s; }

// this method won't allow the return type to change
const string& returnStringConst(string& s) { return s; }

void print(string var, int number) { cout << var << ": " << number << endl; }

int main() {
   // -----------------------------------------------------------
   // ---------------------- Const Practice ---------------------
   // -----------------------------------------------------------

   // VALUES ----------------------------------------------------
   const int A = 1;
   // const values can't be changed
   // A = 5; //illegal
   print("A", A);

   // POINTERS --------------------------------------------------
   int B = 2;
   int* const ptrB = &B;
   // const pointers can't point anywhere else
   // ptrB = &A; //illegal
   print("B", B);

   // but the value they point toward can still be changed
   *ptrB = 3;
   print("B", B);

   // FUNCTIONS -------------------------------------------------
   Basic test(5);

   // first
   // const signature()
   // return type that can't be changed
   // Good at protecting variables during initialization
   // test.firstConstGet() = 23; //illegal
   cout << "Class first const: " << test.firstConstGet() << endl;

   // second
   // signature(const int&)
   // won't change the reference
   // Good at protecting values that are passed into functions
   int outside = 101;
   cout << "Class second const: " << test.secondConstGet(outside) << endl;
   // test::outside = 5; //illegal
   print("outside", outside);

   // third
   // signature() const
   // won't change the data within the current class that calls the method
   // Good at restricting access for methods within classes (getters)
   cout << "Class third const: " << test.thirdConstGet() << endl;
   // test::num = 5; //illegal
   print("num", test.num);

   // -----------------------------------------------------------

   // -----------------------------------------------------------
   // ---------------------- Operator Overload ------------------
   // -----------------------------------------------------------

   // -----------------------------------------------------------

   return 0;
}

// TODO List
/*

- operator overload
- reference
- pointers
- vectors
- protected
- inheritance




*/