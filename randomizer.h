#ifndef RANDOMIZER_H
#define RANDOMIZER_H

class Randomizer {
  private:
   int min = 1;
   int max = 100;
   int r = 0;

  public:
   Randomizer();
   Randomizer(int newMin, int newMax);
   ~Randomizer();

   // getters
   int getMin();
   int getMax();
   int getR();

   // actions
   void randomize();
};

// using namespace std;

// Randomizer::Randomizer(int min = 1, int max = 100) {}

// Randomizer::~Randomizer() {}

// // getters
// int getMin() { return min; }
// int getMax() { return max; }

// // actions
// int randomize() {
//    srand(time(NULL));
//    int r = rand() % getMax() + getMin();
// }

#endif