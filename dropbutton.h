#ifndef DROPBUTTON
#define DROPBUTTON

#include<FL/Fl_Button.H>
//#include"utils.h"
#include"stack.h"
#include<cstdlib>
#include<vector>
#include"operandButton.h"
#include<sstream>
using namespace std;




class DropButton : public Fl_Button {
private:
  
public:
  float from_string( const std::string &s) {
    stringstream ss(s);
    float result;
    ss >> result;    // TODO handle errors
    return result;
  }

  
  Stack *stack;
  
  string *myStr;

 DropButton(int X, int  Y, int W, int H, char* label, Stack* stack, string* numLst )  : Fl_Button(X, Y, W, H, label){
    this->stack = stack;
    this->myStr = numLst;
    this->copy_label(label);
    
  }
  
  
  
  static void dropCB(Fl_Widget* w, void*){
    
    DropButton *myButton = (DropButton *)w;
    // float number = 0;
    //    n/mber = myButton->from_string(*myButton->myStr);
    
    myButton->stack->pop();    
    
    //(*myButton->myStr) = "";
    

   
    }
  

  
  };



#endif
