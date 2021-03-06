// Initialized by Lucas Stoltman October 31st 2021

#include <iostream>
#include <string>

#include "basic.h"
#include "operator.h"
#include "randomizer.h"

using namespace std;

// class Test {

// }

// this method will allow the return type to change
string& returnString(string& s) { return s; }

// this method won't allow the return type to change
const string& returnStringConst(string& s) { return s; }

void print(string var, int number) { cout << var << ": " << number << endl; }

// https://www.geeksforgeeks.org/bubble-sort/
void swap(int* xp, int* yp) {
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

// https://www.geeksforgeeks.org/bubble-sort/
void bubbleSort(int arr[], int n) {
   int i, j;
   for (i = 0; i < n - 1; i++)

      // Last i elements are already in place
      for (j = 0; j < n - i - 1; j++)
         if (arr[j] > arr[j + 1]) swap(&arr[j], &arr[j + 1]);
}

// bool find(int &array[] arr) {

//    return false;
// }

void duplicate(int& num) { num *= 2; }

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

   // generating random numbers
   Randomizer r(1, 10);

   cout << "\n---------- << ---------\n";
   // op.print();
   // cout << op; TODO
   // op.print();

   cout << "\n---------- = ----------\n";
   op.print();
   cout << "Assigning " << op.getName() << " to " << r.randomize() << endl;
   op = r.getR();
   op.print();

   cout << "\n---------- + ----------\n";
   op.print();
   cout << "Adding " << r.randomize() << endl;
   op + r.getR();
   op.print();

   Operator op2("op2", r.randomize());
   op2.print();

   Operator op3("op3", op + op2);

   cout << "Adding " << op.getName() << " to " << op2.getName() << endl;
   cout << op.getNum() << " + " << op2.getNum() << endl;
   cout << "Total: " << op3.getNum() << endl;

   cout << "\n-------- ++pre --------\n";
   op.print();
   cout << "Incrementing " << op.getName() << " via prefix\n";
   ++op;
   op.print();

   cout << "\n---------- - ----------\n";
   op.print();

   cout << "Subtracting " << r.randomize() << endl;
   op - r.getR();
   op.print();

   op2.print();

   cout << "Subtracting " << op.getName() << " from " << op2.getName() << endl;
   cout << op.getNum() << " - " << op2.getNum() << endl;
   op3 = op - op2;
   cout << "Total: " << op3.getNum() << endl;

   cout << "\n---------- / ----------\n";
   op.print();
   cout << op.getNum() << " / " << r.randomize() << endl;
   op / r.getR();
   op.print();

   cout << "\n---------- * ----------\n";
   op.print();
   cout << op.getNum() << " * " << r.randomize() << endl;
   op* r.getR();
   op.print();

   cout << "--------------------------------------------\n"
        << "---------------- References ----------------\n"
        << "--------------------------------------------\n";

   int ref1 = 5;
   int& ref2 = ref1;
   int& ref3 = ref2;

   cout << "Value of ref1 = " << ref1 << endl
        << "Value of ref2 = " << ref2 << endl
        << "Value of ref3 = " << ref3 << endl;

   cout << "Changing ref1 to " << r.randomize() << endl;
   ref1 = r.getR();

   cout << "Value of ref1 = " << ref1 << endl
        << "Value of ref2 = " << ref2 << endl
        << "Value of ref3 = " << ref3 << endl;

   // showcase a reference in a method here
   cout << "\n---------- method pass by reference ----------\n";
   int a = 7;
   cout << "a: " << a << endl;
   cout << "duplicating a...\n";
   duplicate(a);
   cout << "a: " << a << endl;

   return 0;
}

// TODO List
/*

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


Optional
   - Fix operator division truncation

*/