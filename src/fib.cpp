#include "fib.hpp"

int Fib::calculate(const int n){
  if(n == 0){
    return 0;
  }
  if(n == 1){
    return 1;
  }
  return this->calculate(n - 1) + this->calculate(n - 2);
}
