#include "basic.h"

#include <iostream>

using namespace std;

// constructors
Basic::Basic() {}
Basic::Basic(int i) : num(i) {}

// getters and setters
int Basic::getNum() { return num; }
void Basic::setNum(int i) { num = i; }

// -----------------------------------------------------------
// -----------------------Const Practice----------------------
// -----------------------------------------------------------
// return type that can't be changed
const int& Basic::firstConstGet() { return num; }

// won't change the reference
int& Basic::secondConstGet(const int& outside) {
   // outside = 5; //illegal
   return num;
}

// won't change the data within the current class that calls the method
int Basic::thirdConstGet() const {
   // num = 5;  // illegal
   return num;
}
// -----------------------------------------------------------

// print
void Basic::printNum() { cout << getNum() << endl; }