#include"stack.h"
#include<vector>

using namespace std;

Stack::Stack(){
  stack = new vector<float>;
} 

void Stack::push(float x){
  stack->insert(stack->begin(),x);
}
