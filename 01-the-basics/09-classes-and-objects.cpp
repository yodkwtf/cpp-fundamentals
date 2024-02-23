#include <iostream>
using namespace std;

// Class
class Person
{
public:
  string name;
  int age;
};

int main()
{
  //  Object
  Person person1;
  person1.name = "John";
  person1.age = 25;

  cout << person1.name << " is " << person1.age << " years old." << endl;

  // Another object
  Person person2;
  person2.name = "Sally";
  person2.age = 30;

  cout << person2.name << " is " << person2.age << " years old." << endl;

  return 0;
}