#ifndef RANDOMIZER_H;
#define RANDOMIZER_H ;

class Randomizer {
  private:
   int min = 1;
   int max = 100;

  public:
   Randomizer(int min = 1, int max = 100);
   ~Randomizer();

   // actions
   int randomize();
};

Randomizer::Randomizer(int min = 1, int max = 100) {}

Randomizer::~Randomizer() {}

// actions
int randomize() {
   srand(time(NULL));
   // int r = rand() % max + min;
}

#endif