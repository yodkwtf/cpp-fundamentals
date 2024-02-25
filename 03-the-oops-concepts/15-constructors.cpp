#include <iostream>
using namespace std;

class Employee
{
public:
  string Name;
  int Age;
  string Company;

  // Constructor
  Employee(string name, int age, string company)
  {
    Name = name;
    Age = age;
    Company = company;
  }

  void introduce()
  {
    cout << "Name - " << Name << endl;
    cout << "Age - " << Age << endl;
    cout << "Company - " << Company << endl;
    cout << endl;
  };
};

int main()
{
  Employee employee1("John", 30, "Google");
  employee1.introduce();

  Employee employee2("Jane", 35, "Amazon");
  employee2.introduce();

  Employee employee3("Jack", 40, "Facebook");
  employee3.introduce();

  Employee employee4("Jill", 45, "Apple");
  employee4.introduce();

  Employee employee5("James", 50, "Microsoft");
  employee5.introduce();

  Employee employee6("Jenny", 55, "Netflix");
  employee6.introduce();

  return 0;
}