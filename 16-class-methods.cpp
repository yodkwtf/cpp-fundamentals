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

  // Method
  void getInformation()
  {
    cout << name << " is " << age << " years old." << endl;
  }
};

int main()
{
  // Object
  Person person1("John Doe", 25);
  person1.getInformation();

  // Another object
  Person person2("Sally Doe", 30);
  person2.getInformation();

  return 0;
}