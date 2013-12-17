#ifndef DECIMALBUTTON
#define DECIMALBUTTON



#include<FL/Fl_Button.H>

#include"utils.h"
#include"stack.h"
#include<cstdlib>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

class DecimalButton : public Fl_Button {

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


 DecimalButton(int X, int  Y, int W, int H, char* label, Stack* stack, string *numLst,  DisplayBox *db)  : Fl_Button(X, Y, W, H, label){
    this->stack = stack;
    this->myStr = numLst;
    //int temp = std::atoi(label);
    this->id = label[1];
    this->db = db;

    
  }



  
  static void opCB(Fl_Widget* w, void*){
    DecimalButton *myButton = (DecimalButton *)w;
    string temp = (*myButton->myStr) + myButton->id;
    (*myButton->myStr)= temp;
    //myButton->stack->push(myButton->id);
    
    float number = myButton->from_string(*myButton->myStr);
    
    myButton->db->updateBox(number); 

  }

  
  


  
  };



#endif
