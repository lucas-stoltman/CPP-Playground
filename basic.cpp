#include "basic.h"

#include <iostream>

using namespace std;

// constructors
Basic::Basic() {}
Basic::Basic(int i) { num = i; }

void Basic::printNum() { cout << num << endl; }