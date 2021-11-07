#ifndef Basic_H
#define Basic_H

class Basic {
  public:
   // constructors
   Basic();
   Basic(int i);

   void setNum(int i);

   // print
   void printNum();

  protected:
  private:
   int getNum();
   int num = 1;
};

#endif