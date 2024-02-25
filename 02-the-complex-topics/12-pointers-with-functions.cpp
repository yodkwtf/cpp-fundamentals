#include <iostream>
using namespace std;

// function declaration
void myBirthday(int *age);

int main()
{
  int myAge = 25;

  cout << "I am " << myAge << " years old." << endl;
  myBirthday(&myAge);
  cout << "Now I am " << myAge << " years old." << endl;

  return 0;
}

// function definition
void myBirthday(int *age)
{
  *age = *age + 1;
  cout << "Happy Birthday! You are now " << *age << " years old." << endl;
}
