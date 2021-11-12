
#include "operator.h"

#include <iostream>
#include <string>

using namespace std;

// constructors
Operator::Operator(string newName, int n) : name(newName), num(n){}
Operator::Operator(int n) : num(n){}

Operator::~Operator() {}

// getters
int Operator::getNum() { return num; }
string Operator::getName() { return name; }

// setters
void Operator::setNum(int n) { num = n; }
void Operator::setName(string n) { name = n; }

// actions
void Operator::print() { cout << name << ": " << num << endl; }

// ------------------------------------
// operator overloads
// ------------------------------------

// <<
// void Operator::operator<<(Operator &op) { cout << name << ": " << num <<
// endl; }

// =

// +
void Operator::operator+(int n) {
   setNum(num+n);
}

   // object addition
   Operator& Operator::operator+(Operator& op1) {
      
      return *this;
   }


// ++prefix
Operator& Operator::operator++() {
   ++num;
   return *this;
}

// postfix++

// -

// /

// *
