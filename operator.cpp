
#include "operator.h"

#include <iostream>

using namespace std;

// operator overloads
// <<

// =

// +

// -

// /

// *

Operator::Operator(/* args */) {}

Operator::~Operator() {}

// getters
int Operator::getNum() { return num; }

// setters
void Operator::setNum(int n) { num = n; }

// actions
void Operator::printNum() { cout << "Num: " << num << endl; }
