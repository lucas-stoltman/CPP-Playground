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

int main() {
   string s = "test";

   cout << s << endl;

   returnString(s) = "test2";
   // returnStringConst(s) = "testConst";

   cout << s << endl;

   // -----------------------------------------------------------

   Basic test(5);

   test.printNum();
   test.setNum(10);
   test.printNum();

   return 0;
}

// TODO List
/*

- const
- operator overload
- reference
- pointers
- vectors
- protected
- inheritance




*/