#include"stack.h"
#include<vector>
#include<iostream>
#include"displayBox.h"
using namespace std;

Stack::Stack(DisplayBox  *db){
  stack = new vector<float>;
  this->db = db;
} 

void Stack::push(float x){
  
  stack->push_back(x);//insert(stack->begin(),x);
  this->db->updateBox(x);
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


float Stack::peek(){
  float x = stack->back();
  return x;
}

