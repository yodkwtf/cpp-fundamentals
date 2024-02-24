# Object Oriented Programming

OOP is a programming paradigm that is based on the concept of objects. It is used to structure a software program into simple, reusable pieces of code blueprints (usually called classes), which are used to create individual instances of objects.

#### Four Pillars of OOP

1. Encapsulation
2. Abstraction
3. Inheritance
4. Polymorphism

## Classes and Objects

A class is a blueprint for creating objects (a particular data structure), providing initial values for state (member variables or attributes), and implementations of behavior (member functions or methods).

- A class is a user-defined data type that has data members and member functions
- A class is a template for objects, and an object is an instance of a class

###### Creating a class

```cpp
class Employee {
  string Name;
  int Age;
  string Company;
};
```

- `Name`, `Age`, and `Company` are member variables or attributes
- Every attribute of a class is private by default
- Since the attributes are private, they cannot be accessed directly from outside the class

###### Creating an object

```cpp
int main() {
  Employee employee1;
  employee1.Name = "John"; // Error: 'Name' is private within this context
}
```

To access the attributes of a class, we need to create a public member function or method

```cpp
class Employee {
  public: // Access modifier
    string Name;
    int Age;
    string Company;

    void introduce() {
      cout << "Name - " << Name << endl;
      cout << "Age - " << Age << endl;
      cout << "Company - " << Company << endl;

    }
};
```

###### Accessing the attributes of a class

```cpp
int main() {
  Employee employee1;
  employee1.Name = "John";
  employee1.Age = 30;
  employee1.Company = "Google";

  employee1.introduce(); // Name - John, Age - 30, Company - Google
}
```

## Access Modifiers

- `public`: Members are accessible from outside the class
- `private`: Members cannot be accessed (or viewed) from outside the class
- `protected`: Members cannot be accessed from outside the class, however, they can be accessed in inherited classes

```cpp
class Employee {
  public:
    string Name;
    int Age;
    string Company;
  private:
    int Salary;
  protected:
    string Department;
};
```

## Constructors

A constructor is a function that is automatically called when an object is created. It is used to initialize the object's attributes.

> As of now if we want to create 100 employees, we need to set the attributes of each employee manually. This is not efficient. We can use a constructor to initialize the attributes of an object when it is created.

Currently, we are using a default constructor, which is provided by the compiler if we don't define one.

###### Creating our own constructor

```cpp
class Employee {
  public:
    string Name;
    int Age;
    string Company;

    Employee(string name, int age, string company) {
      Name = name;
      Age = age;
      Company = company;
    }
};
```

###### Creating an object using a constructor

```cpp
int main() {
  Employee employee1("John", 30, "Google");
  employee1.introduce(); // Name - John, Age - 30, Company - Google

  Employee employee2("Jane", 25, "Facebook");
  employee2.introduce(); // Name - Jane, Age - 25, Company - Facebook

  Employee employee3("Tom", 35, "Amazon");
  employee3.introduce(); // Name - Tom, Age - 35, Company - Amazon
}
```

#### Rule of Constructors

- A constructor has the same name as the class
- A constructor does not have a return type
- Constructors need to be public (there can be special cases where we need a private constructor, but that is not common)
