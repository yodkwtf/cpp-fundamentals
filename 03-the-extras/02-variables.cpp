#include <iostream>

int main()
{
  int a = 10;
  int b = 20;

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  // Swap the values of a and b
  int temp = a;
  a = b;
  b = temp;

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  return 0;
}