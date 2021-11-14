#include "randomizer.h"

#include <iostream>

Randomizer::Randomizer() {}
Randomizer::Randomizer(int newMin, int newMax) : min(newMin), max(newMax) {}

Randomizer::~Randomizer() {}

// getters
int Randomizer::getMin() { return min; }
int Randomizer::getMax() { return max; }

// actions
int Randomizer::randomize() {
   srand(time(NULL));
   int r = rand() % getMax() + getMin();
   return r;
}