#include <iostream>
using namespace std;

class Employee
{
private:
  string Name;
  int Age;
  string Company;

public:
  // Constructor
  Employee(string name, int age, string company)
  {
    Name = name;
    Age = age;
    Company = company;
  }

  // Setters
  void setName(string name)
  {
    Name = name;
  }

  void setAge(int age)
  {
    if (age < 18)
    {
      cout << "Employee can not be less than 18 years" << endl;
    }
    else
    {
      Age = age;
    }
  }

  void setCompany(string company)
  {
    Company = company;
  }

  // Getters
  string getName()
  {
    return Name;
  }

  int getAge()
  {
    return Age;
  }

  string getCompany()
  {
    return Company;
  }

  // Other functions
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

  // Setters
  employee2.setName("Jane Doe");
  employee2.setAge(40);
  employee2.setCompany("Amazon Web Services");

  // Getters
  cout << "Name - " << employee2.getName() << endl;
  cout << "Age - " << employee2.getAge() << endl;
  cout << "Company - " << employee2.getCompany() << endl;

  // Setter with invalid age
  employee2.setAge(15); // Employee can not be less than 18 years
  employee2.introduce();

  return 0;
}