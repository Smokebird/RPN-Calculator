//header file for the stack class

#ifndef STACK
#define STACK
#include<vector>
#include"displayBox.h"
using namespace std;

class Stack{
 private:
  vector<float> *stack; //Note: uses floats so as to account for anything a sqrt might return
  DisplayBox *db;
 public:
  Stack(DisplayBox *);
  void push(float);
  float peek();
  float pop();

  
};



#endif
