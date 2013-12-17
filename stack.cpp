#include"stack.h"
#include<vector>

using namespace std;

Stack::Stack(){
  stack = new vector<float>;
} 

void Stack::push(float x){
  stack->push_back(x);//insert(stack->begin(),x);
  
}

float Stack::pop(){
  float x = stack->back();
  stack->pop_back();
  return x;
}
