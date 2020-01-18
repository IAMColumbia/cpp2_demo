#include <iostream>
#include "fib.hpp"

int main()
{
  Fib * fib = new Fib();
  int n = 0;
  std::cin >> n;
  int result = fib->calculate(n);
  std::cout << result << std::endl;
  delete(fib);
}
