
//This is a file for keeping together all of my utility functions that I come up with over the years!
     // Note: I might move this to the cpp directory
#include <vector>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <limits>
#include <vector>
#include <iomanip>
#include <sstream>


using namespace std;

/*
  vector<string>* split(string s, string delim){
  vector<string>* res = new vector<string>();
  int pos = 0;
  int lastPos = 0;
  
  while((pos = s.find_first_of(delim,lastPos)) != string::npos) {
  res->push_back(s.substr(lastPos,pos-lastPos));
  lastPos = pos+1;
  }
  res->push_back(s.substr(lastPos,string::npos));
  return res;
  }
  
*/



/*
float from_string(std::string const & s) {
  std::stringstream ss(s);
  float result;
  ss >> result;    // TODO handle errors
  return result;
}
*/
//A base ten string to int converter
bool STOI(const std::string& str, int& result) //takes int reference and changes that int,
{                                              // rather than returning an integer.
    std::string::const_iterator i = str.begin();
    
    if (i == str.end()) //Doesn't allow empty string
        return false;
 
    bool negative = false;
 
    if (*i == '-')
    {
        negative = true;
        ++i;
 
        if (i == str.end()) //Again, disallows string with no actual numerical values.
            return false;
    }
 
    result = 0;
 
    for (; i != str.end(); ++i)
    {
        if (*i < '0' || *i > '9')
            return false;
 
        result *= 10;
        result += *i - '0';
    }
 
    if (negative)
    {
        result = -result;
    }
 
    return true;
}





int ATOI(const char *p) {
  int x = 0;
  bool neg = false;
  if (*p == '-') {
    neg = true;
    ++p;
  }
  while (*p >= '0' && *p <= '9') {
    x = (x*10) + (*p - '0');
    ++p;
  }
  if (neg) {
    x = -x;
  }
  return x;
}





/*

std::string naive(T t) {
  std::string rv(std::numeric_limits<T>::digits10+2, 0);
  size_t i = 0;
  if (!t) {
    rv[i++] = '0';
  }
  else {
    size_t ro = 0;
    if (t < 0) {
      rv[i++] = '-';
      t = std::abs(t);
      ro = 1;
    }
    for (T b ; t ; t = b) {
      b = t/10;
      T c = t%10;
      rv[i++] = static_cast<char>('0' + c);
    }
    std::reverse(&rv[ro], &rv[i]);
  }
  rv.resize(i);
  return rv;
}


*/

 
/* A utility function to reverse a string  */
void reverse(char str[], int length){
  int start = 0;
  int end = length -1;
  while (start < end)
    {
      swap(*(str+start), *(str+end));
      start++;
      end--;
    }
}



char* ITOA(int num, char* str, int base) {
    int i = 0;
    bool isNegative = false;
    //std::cout << "ITOA" << "beginning" << std::endl;
    /* Handle 0 explicitely, otherwise empty string is printed for 0 */
    if (num == 0){
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }
    //std::cout << "middle 1" << std::endl;
    // In standard itoa(), negative numbers are handled only with 
    // base 10. Otherwise numbers are considered unsigned.
    if (num < 0 && base == 10){
        isNegative = true;
        num = -num;
    }
    //std::cout << "middle 2" << std::endl;
    // Process individual digits
    while (num != 0){
      //    std::cout << "inside" << std::endl;
        int rem = num % base;

	//std::cout << "post modulo" << std::endl;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';

	//  std::cout << "str[i++]" << std::endl;
        num = num/base;
    }
    //std::cout << "middle 3" << std::endl;
    // If number is negative, append '-'
    if (isNegative)
        str[i++] = '-';
 
    str[i] = '\0'; // Append string terminator
    //std::cout << "almost there" << std::endl;
    // Reverse the string
    reverse(str, i);
    //std::cout << "end" << std::endl;
    return str;
}
