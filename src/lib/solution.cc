#include "solution.h"
#include <iostream>

unsigned long long int Solution::Factorial_Re(int n) { //Recursive version of FuncFactorial
  int result;
  try
  {
    if(n == 0) {
      return 1;
    }
    else if (n >= 0) {
      return n * Factorial_Re(n - 1);
    }
    else {
      throw "Error: Number you input is less than 0";
    }
  }
  catch(char *str)
  {
    std::cerr << str << std::endl;
  }
}

unsigned long long int Solution::Factorial_NonRe(int m) { //Non-recursive version of FuncFactorial
  unsigned long long int result = 1;
  try{
      if (m >= 0)
    {
      for(int i = 1 ; i <= m ; i++) {
        result = result * i;
      }
        return result;
    }
    else
    {
      throw "Error: Number you input is less than 0";
    }
  }
  catch(char *str)
  {
    std::cerr << str << std::endl;
  }

}