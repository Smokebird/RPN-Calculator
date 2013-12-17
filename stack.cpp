#include"stack.h"
#include<vector>
#include<iostream>

using namespace std;

Stack::Stack(){
  stack = new vector<float>;
} 

void Stack::push(float x){
  stack->push_back(x);//insert(stack->begin(),x);
  
  for(int i = 0; i< this->stack->size(); i++){
    std::cout<<(*stack)[i];
  }
  cout << endl;
}

float Stack::pop(){
  float x = stack->back();
  stack->pop_back();
  return x;
}
