#include <iostream>
using namespace std;

int main()
{
  // int
  int age = 25;
  cout << "Age: " << age << endl;

  // float
  float weight = 75.5;
  cout << "Weight: " << weight << endl;

  // double
  double pi = 3.14159;
  cout << "Pi: " << pi << endl;

  // char
  char grade = 'A';
  cout << "Grade: " << grade << endl;

  // string
  string username = "John";
  cout << "Name: " << username << endl;

  // bool
  bool isMale = true;
  cout << "Is John Male? " << isMale << endl;

  // arrays
  int luckyNums[] = {4, 8, 15, 16, 23, 42};
  cout << "Lucky Numbers: " << luckyNums[0] << endl;

  // modifying array
  luckyNums[0] = 7;
  cout << "Lucky Numbers: " << luckyNums[0] << endl;

  return 0;
}