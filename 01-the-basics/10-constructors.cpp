#include <iostream>
using namespace std;

class Person
{
public:
  string name;
  int age;

  // Constructor
  Person(string n, int a)
  {
    name = n;
    age = a;
  }
};

int main()
{
  // Object
  Person person1("John Doe", 25);
  cout << person1.name << " is " << person1.age << " years old." << endl;

  // Another object
  Person person2("Sally Doe", 30);
  cout << person2.name << " is " << person2.age << " years old." << endl;

  return 0;
}