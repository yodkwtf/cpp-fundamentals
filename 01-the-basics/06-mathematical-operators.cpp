#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int b = 20;

  // Addition
  double sum = a + b;
  cout << "Sum: " << sum << endl; // 30

  // Subtraction
  double difference = a - b;
  cout << "Difference: " << difference << endl; // -10

  // Multiplication
  double product = a * b;
  cout << "Product: " << product << endl; // 200

  // Division
  double quotient = a / b;
  cout << "Quotient: " << quotient << endl; // 0.5

  // Modulus
  int remainder = b % a;
  cout << "Remainder: " << remainder << endl; // 0

  // Increment
  a++;
  cout << "Increment: " << a << endl; // 11

  // Decrement
  b = b - 1;
  cout << "Decrement: " << b << endl; // 19

  return 0;
}