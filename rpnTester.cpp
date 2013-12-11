//This file will contain code to start testing our stack as well as any other functions we need for the rpn calculator.

#include<iostream>
#include"stack.h"

using namespace std;

int main(int argc, const char *argv[]){
  Stack *s = new Stack();
  float x  = 1.0;
  s->push(x);
  x = 2.0;
  s->push(x);
  x = 3.0;
  s->push(x);
  x = 4.0;
  s->push(x);
  cout << s->pop() << endl;
  cout << s->pop() << endl;
  cout << s->pop() << endl;
  cout << s->pop() << endl;

}
