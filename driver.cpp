// Initialized by Lucas Stoltman October 31st 2021

#include <iostream>
#include <string>

#include "basic.h"
#include "operator.h"

using namespace std;

// class Test {

// }

// this method will allow the return type to change
string& returnString(string& s) { return s; }

// this method won't allow the return type to change
const string& returnStringConst(string& s) { return s; }

void print(string var, int number) { cout << var << ": " << number << endl; }

int main() {
   cout << "--------------------------------------------\n"
        << "------------------ Const -------------------\n"
        << "--------------------------------------------\n";

   cout << "\n------ VALUES ------\n";
   const int A = 1;
   // const values can't be changed
   // A = 5; //illegal
   print("A", A);

   cout << "\n------ POINTERS ------\n";
   int B = 2;
   int* const ptrB = &B;
   // const pointers can't point anywhere else
   // ptrB = &A; //illegal
   print("B", B);

   // but the value they point toward can still be changed
   *ptrB = 3;
   print("B", B);

   cout << "\n------ FUNCTIONS ------\n";
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

   cout << "\n\n";

   cout << "--------------------------------------------\n"
        << "----------- Operator Overloading -----------\n"
        << "--------------------------------------------\n";

   Operator op("op");

   cout << "\n---------- << ---------\n";
   op.print();
   // cout << op; TODO
   op.print();

   cout << "\n---------- = ----------\n";
   op.print();
   // op=5; TODO
   op.print();

   cout << "\n---------- + ----------\n";
   op.print();
   op + 5;
   op.print();

   Operator op2("op2", 35);
   op2.print();

   Operator op3("op3", op + op2);

   cout << "op3= " << op.getNum() << " + " << op2.getNum() << endl;
   op3.print();

   cout << "\n-------- ++pre --------\n";
   op.print();
   ++op;
   op.print();

   cout << "\n---------- - ----------\n";
   op.print();
   op - 5;
   op.print();

   op2.print();

   cout << op.getNum() << " - " << op2.getNum() << endl;
   cout << "Total: " << op - op2 << endl;

   cout << "\n---------- / ----------\n";
   op.print();
   cout << op.getNum() << " / " << 5 << endl;
   op / 5;
   op.print();

   cout << "\n---------- * ----------\n";
   op.print();
   // op*5; TODO
   op.print();

   // -----------------------------------------------------------

   return 0;
}

// TODO List
/*

- operator overload
   <<
   >>
   =
   -
   / fix truncation
   *
- reference
- pointers
- function pointers
- vectors
- protected
- inheritance

- Data Structures (All Dynamic)
   - Array
   - Array List
   - Vector
   - Stack
   - Queue
   - Single Linked List
   - Double Linked List
   - Skip List
   - Binary Tree
   - Hash Map


*/