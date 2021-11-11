
#include "operator.h"

#include <iostream>
#include <string>

using namespace std;

// operator overloads
// <<
// void Operator::operator<<(Operator &op) { cout << name << ": " << num <<
// endl; }

// =

// +
void operator+(Operator& op) {}

// ++prefix
Operator& Operator::operator++() {
   ++num;
   return *this;
}

// -

// /

// *

Operator::Operator(/* args */) {}

Operator::~Operator() {}

// getters
int Operator::getNum() { return num; }
string Operator::getName() { return name; }

// setters
void Operator::setNum(int n) { num = n; }
void Operator::setName(string n) { name = n; }

// actions
void Operator::print() { cout << name << ": " << num << endl; }
