#include <iostream>
using namespace std;

// function declaration
void greet();
void introduce(string name, int age);
float add(float a, float b);

int main()
{
  greet();
  introduce("John", 25);
  cout << add(2.5, 3.5) << endl;

  return 0;
}

// function definition
void greet()
{
  cout << "Hello!" << endl;
}

void introduce(string name, int age)
{
  cout << "My name is " << name << " and I am " << age << " years old." << endl;
}

float add(float a, float b)
{
  return a + b;
}
