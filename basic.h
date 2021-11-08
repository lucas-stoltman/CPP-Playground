#ifndef Basic_H
#define Basic_H

class Basic {
  public:
   // constructors
   Basic();
   Basic(int i);

   void setNum(int i);

   // -----------------------------------------------------------
   // -----------------------Const Practice----------------------
   // -----------------------------------------------------------
   // return type that can't be changed
   const int& firstConstGet();

   // won't change the reference
   int& secondConstGet(const int& outside);

   // won't change the data within the current class that calls the method
   int thirdConstGet() const;
   // -----------------------------------------------------------

   // print
   void printNum();

   int num = 1;

  protected:
  private:
   int getNum();
};

#endif