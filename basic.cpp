#include "basic.h"

#include <iostream>

using namespace std;

// constructors
Basic::Basic() {}
Basic::Basic(int i) : num(i) {}

// getters and setters
int Basic::getNum() { return num; }
void Basic::setNum(int i) { num = i; }

void Basic::printNum() { cout << getNum() << endl; }