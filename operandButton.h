#ifndef OPERANDBUTTON
#define OPERANDBUTTON



#include<FL/Fl_Button.H>

#include"utils.h"
#include"stack.h"
#include<cstdlib>
#include<vector>
#include<string>
#include<iostream>
#include"displayBox.h"

using namespace std;

class OperandButton : public Fl_Button {

private:
  
public:
  
  float from_string( const std::string &s) {
    stringstream ss(s);
    float result;
    ss >> result;    // TODO handle errors
    return result;
  }
  Stack *stack;

  string id;
  string *myStr;
  DisplayBox *db;

 OperandButton(int X, int  Y, int W, int H, char* label, Stack* stack, string *numLst, DisplayBox *db)  : Fl_Button(X, Y, W, H, label){
    this->stack = stack;
    this->myStr = numLst;
    this->db = db;
    //int temp = std::atoi(label);
    this->id = label[1];
   
    
  }



  
  static void opCB(Fl_Widget* w, void*){
    OperandButton *myButton = (OperandButton *)w;
    string temp = (*myButton->myStr) + myButton->id;
    (*myButton->myStr)= temp;
    
    float number = myButton->from_string(*myButton->myStr); 
    myButton->db->updateBox(number); 
     
     //myButton->stack->push(myButton->id);



  }

  
  


  
  };



#endif
