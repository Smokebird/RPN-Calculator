//header file for the stack class

#ifndef STACK
#define STACK

#include<vector>

class Stack{
 private:
  vector<float> stack; //Note: uses floats so as to account for anything a sqrt might return
  
 public:
  void push(float);
  float pop();
  


}



#endif
