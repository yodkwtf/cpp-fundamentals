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

## Encapsulation

Encapsulation is the process of wrapping up the data (attributes) and the code (methods) into a single unit called a class. It is used to restrict access to certain attributes and methods of a class to prevent the data from being modified by accident.

#### Getters and Setters

To access or modify the attributes of a class, we create our own public member functions or methods called getters and setters.

- Getters are used to access the attributes of a class
- Setters are used to modify the attributes of a class

```cpp
class Employee {
  private:
    int Salary;

  public:
    void setSalary(int salary) {
      if (salary < 0) {
        cout << "Salary cannot be negative" << endl;
      } else {
        Salary = salary;
      }
    }

    int getSalary() {
      return Salary;
    }
};
```

###### Using Getters and Setters

```cpp
int main() {
  Employee employee1;
  employee1.setSalary(50000);
  cout << employee1.getSalary(); // 50000
}
```

## Abstraction

Abstraction is the process of creating a simple model of a complex system. It hides the complex details of a system and only shows the necessary details of the object.

In C++, we can create an abstract class using the `virtual` keyword.

```cpp
class AbstractEmployee {
  virtual void askForPromotion() = 0;
};
```

In the above example, `askForPromotion` is an abstract method. It is a method without a body. We use the `= 0` to make it an abstract method. We use the `virtual` keyword to make it an abstract class.

#### Rules of Abstract Classes

- An abstract class is a class that cannot be instantiated
- An abstract class can have abstract methods (methods without a body)
- Any class that inherits an abstract class must implement the abstract methods

```cpp
class Employee: public AbstractEmployee {
  public:
    void askForPromotion() {
      if (Salary > 1000) {
        cout << "You got a promotion" << endl;
      } else {
        cout << "Sorry, no promotion for you" << endl;
      }
    }
};
```

If we don't implement the abstract method in the derived class, we will get an error.

###### Using an Abstract Class

```cpp
int main() {
  Employee employee1;
  employee1.setSalary(50000);
  employee1.askForPromotion(); // You got a promotion
}
```

## Inheritance

Inheritance is the process of creating a new class from an existing class. The new class is called a derived class, and the existing class is called a base class.

- The derived class inherits the attributes and methods of the base class
- The derived class can also have its own attributes and methods

```cpp
class Chef {
  public:
    void makeChicken() {
      cout << "The chef makes chicken" << endl;
    }
    void makeSalad() {
      cout << "The chef makes salad" << endl;
    }
};

class ItalianChef: public Chef {
  public:
    void makePasta() {
      cout << "The chef makes pasta" << endl;
    }
};
```

###### Using Inheritance

```cpp
int main() {
  ItalianChef chef;
  chef.makeChicken(); // The chef makes chicken
  chef.makePasta(); // The chef makes pasta
}
```

## Polymorphism

Polymorphism is the ability of an object to take on many forms. It is used to perform a single action in different ways.

- Polymorphism is one of the primary features of OOP
- Polymorphism allows us to perform a single action in different ways
- Polymorphism is achieved by method overloading and method overriding

#### Method Overloading

Method overloading is the process of using the same method name for different methods. It is used to create multiple methods with the same name but different parameters.

```cpp
class Employee {
  public:
    void work() {
      cout << "Employee is working" << endl;
    }
    void work(int hours) {
      cout << "Employee is working for " << hours << " hours" << endl;
    }
};
```

###### Using Method Overloading

```cpp
int main() {
  Employee employee;
  employee.work(); // Employee is working
  employee.work(8); // Employee is working for 8 hours
}
```

#### Method Overriding

Method overriding is the process of redefining a base class method in a derived class. It is used to create a new implementation of a method in the derived class.

```cpp
class Employee {
  public:
    virtual void work() {
      cout << "Employee is working" << endl;
    }
};

class Manager: public Employee {
  public:
    void work() {
      cout << "Manager is working" << endl;
    }
};

class Chef: public Employee {
};
```

In the above example, we use the `virtual` keyword to make the `work` a virtual method. This first checks if the derived class has a method with the same name. If it does, it uses the derived class method. If it doesn't, it uses the base class method.

###### Using Method Overriding

```cpp
int main() {
  Manager manager;
  manager.work(); // Manager is working

  Chef chef;
  chef.work(); // Employee is working
}
```

#### Dynamic Polymorphism

Dynamic polymorphism is the process of using the base class pointer to call the derived class method. It can be used to perform a single action for all the different types of derived classes since the base class pointer can point to any derived class object.

```cpp
int main() {
  Employee *employees[3]; = {&employee, &manager, &chef};

  for (int i = 0; i < 3; i++) {
    employees[i]->work();
  }
}
```

If we didn't use base class pointers, we would need to make a separate call to the `work` method for each derived class object since each Employee class instance is from a different type of derived class. Imagine the efficiency of this when we have 1000 derived class objects.

```cpp
int main() {
  Employee employee;
  Manager manager;
  Chef chef;

  employee.work();
  manager.work();
  chef.work();
}
```

## Abstraction vs Polymorphism

Abstract classes are used to provide a common interface for all the derived classes which means it tells the derived class what to do but not how to do it. It is the responsibility of the derived class to implement the abstract methods.

###### Abstract Class

```cpp
class AbstractEmployee {
  virtual void startJob() = 0;
  virtual void morningMeeting() = 0;
  virtual void lunchBreak() = 0;
  virtual void endJob() = 0;
};
```

###### Derived Classes

```cpp
class Employee: public AbstractEmployee {
  public:
    void startJob() {
      cout << "Employee starts the job" << endl;
    }
    void morningMeeting() {
      cout << "Employee attends the morning meeting" << endl;
    }
    void lunchBreak() {
      cout << "Employee takes a lunch break" << endl;
    }
    void endJob() {
      cout << "Employee ends the job" << endl;
    }
};

class Manager: public AbstractEmployee {
  public:
    void startJob() {
      cout << "Manager starts the job" << endl;
    }
    void morningMeeting() {
      cout << "Manager attends the morning meeting" << endl;
    }
    void lunchBreak() {
      cout << "Manager takes a lunch break" << endl;
    }
    void endJob() {
      cout << "Manager ends the job" << endl;
    }
};
```

In Polymorphism, the derived class may or may not implement the method of the base class. The base class method has a default implementation, and the derived class can override it if it wants to.

###### Base Class

```cpp
class Employee {
  public:
    virtual void work() {
      cout << "Employee is working" << endl;
    }
};
```

###### Derived Classes

```cpp

class Manager: public Employee {
  public:
    void work() {
      cout << "Manager is working" << endl;
    }
};

class Chef: public Employee {
};
```

## Summary

- OOP is a programming paradigm that is based on the concept of objects
- A class is a blueprint for creating objects
- An object is an instance of a class
- A class has data members (attributes) and member functions (methods)
- Encapsulation is the process of wrapping up the data and the code into a single unit called a class
- Abstraction is the process of creating a simple model of a complex system
- Inheritance is the process of creating a new class from an existing class
- Polymorphism is the ability of an object to take on many forms
- Polymorphism is achieved by method overloading and method overriding
