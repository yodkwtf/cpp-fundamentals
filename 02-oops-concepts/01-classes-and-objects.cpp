#include <iostream>
using namespace std;

class Employee
{
public:
  string Name;
  int Age;
  string Company;

  void introduce()
  {
    cout << "Name - " << Name << endl;
    cout << "Age - " << Age << endl;
    cout << "Company - " << Company << endl;
  };
};

int main()
{
  Employee employee1;
  employee1.Name = "John";
  employee1.Age = 30;
  employee1.Company = "Google";

  employee1.introduce();

  Employee employee2;
  employee2.Name = "Jane";
  employee2.Age = 35;
  employee2.Company = "Amazon";

  employee2.introduce();

  return 0;
}