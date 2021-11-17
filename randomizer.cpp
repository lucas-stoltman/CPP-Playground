#include "randomizer.h"

#include <ctime>
#include <iostream>
#include <string>

Randomizer::Randomizer() {
   randomize();
   srand(time(0));
}
Randomizer::Randomizer(int newMin, int newMax) : min(newMin), max(newMax) {
   randomize();
   srand(time(0));
}

Randomizer::~Randomizer() {}

// getters
int Randomizer::getMin() const { return min; }
int Randomizer::getMax() const { return max; }
int Randomizer::getR() const { return r; }

// actions
int Randomizer::randomize() {
   r = rand() % getMax() + getMin();
   return r;
}