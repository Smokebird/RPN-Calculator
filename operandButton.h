#ifndef OPERANDBUTTON
#define OPERANDBUTTON



#include<FL/Fl_Button.H>

#include"utils.h"
#include"stack.h"
#include<cstdlib>
#include<vector>

using namespace std;

class OperandButton : public Fl_Button {
private:
  
public:
  
  Stack *stack;
  float id;
  

public:
 


    OperandButton(int X, int  Y, int W, int H, char* label, Stack* stack)  : Fl_Button(X, Y, W, H, label){

   this->stack = stack;  
    int temp = std::atoi(label);
    this->id = temp;
    
  }



  
  static void opCB(Fl_Widget* w, void*){
    static vector<float> num;
    OperandButton *myButton = (OperandButton *)w;
    num.push_back(myButton->id);  
    //myButton->stack->push(myButton->id);
  
  


  
  };



#endif
