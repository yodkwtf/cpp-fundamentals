## Installation and Setup

1. Open Visual Studio Code from the Developer Command Prompt for Visual Studio.
2. Install C/C++ extension pack for Visual Studio Code.
3. Install MinGW via MSYS2 page or use this [direct installer link](https://github.com/msys2/msys2-installer/releases/download/2024-01-13/msys2-x86_64-20240113.exe).
4. Run the installer and install MinGW.
5. Once installed, open MSYS2 shell and run the following command -

   ```bash
   pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
   ```

6. Select the default installation options and proceed with the installation.
7. Add the MinGW bin directory to the system path environment variable.

   ```bash
   C:\Windows\msys64\ucrt64\bin
   ```

8. Check MinGW installation by running the following command in a terminal -

   ```bash
   gcc --version
   g++ --version
   gdb --version
   ```

9. Create a new C++ file and add some code to test the installation.

   ```cpp
   #include <iostream>

   int main() {
     std::cout << "Hello, World!" << std::endl;
     return 0;
   }
   ```

10. Run the file using by clicking the "Run" button in Visual Studio Code or by running the following command in the terminal -

    ###### Compile the file

    ```bash
    g++ -g -o main main.cpp
    ```

    ###### Run the file

    ```bash
    # run the file
    ./main
    ```

## Comments

We write comments in C++ using `//` for single-line comments and `/* ... */` for multi-line comments.

```cpp
// This is a single-line comment

/*
  This is a multi-line comment
*/
```

## Print to Console

We can print to the console using the `std::cout` object from the `iostream` library.

```cpp
#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
```

In the above code -

- `int main()` is the entry point of the program.
- `std::cout` is the standard output stream object.
- `<<` is the insertion operator.
- `"Hello, World!"` is the string to be printed.
- `std::endl` is used to insert a new line and flush the stream.
- `return 0` is used to indicate successful termination of the program.

## Variables

Variables are used to store data in a program. We can declare a variable using the following syntax -

```cpp
int age = 25;
```

In the above code -

- `int` is the data type of the variable.
- `age` is the name of the variable.
- `25` is the value assigned to the variable.

We can also declare a variable without assigning a value to it.

```cpp
int age;

// assign a value later
age = 25;
```

We can also modify the value of a variable later in the program.

```cpp
int age = 25;

// modify the value
age = 30;
```

#### Constants

We can use the `const` keyword to declare a constant variable.

```cpp
const int age = 25;
```

If we try to modify the value of a constant variable, the compiler will throw an error.

```cpp
const int age = 25;

// error
age = 30;
```

## Data Types

C++ has several data types such as `int`, `float`, `double`, `char`, `bool`, etc.

#### int

- `int` is used to store integer values
- Has a size of 4 bytes and a range of -2,147,483,648 to 2,147,483,647
- Can use the `unsigned` keyword to store only positive values

```cpp
int age = 25;
```

#### float

- `float` is used to store decimal numbers
- Has a size of 4 bytes and a range of 3.4e-38 to 3.4e+38
- `f` suffix can be used to declare a float value

```cpp
float pi = 3.14f;
```

#### double

- `double` is used to store double-precision floating-point numbers
- Cam store double the range of float and hence more accurate
- Has a size of 8 bytes and a range of 1.7e-308 to 1.7e+308
- `d` suffix can be used to declare a double value

```cpp
double pi = 3.14159265359;
```

#### char

- `char` is used to store single characters
- Has a size of 1 byte and a range of -128 to 127

```cpp
char grade = 'A';
```

#### string

- `string` is used to store a sequence of characters

```cpp
string name = "John Doe";
```

#### bool

- `bool` is used to store boolean values
- Has a size of 1 byte and can store either `true` or `false`

```cpp
bool isStudent = true;
```

#### array

- `array` is used to store a collection of elements of the same data type
- Can be declared using square brackets `[]`
- Type of array needs to be specified while declaring
- Cannot store elements of different data types
- Size of array can also be specified while declaring

```cpp
int numbers[] = {1, 2, 3, 4, 5};

// specify size
int numbers[5] = {1, 2, 3, 4, 5};

// access elements
cout << numbers[0] << endl; // 1

// modify elements
numbers[0] = 10;
cout << numbers[0] << endl; // 10
```

These were some of the basic data types in C++. There are more data types such as `long`, `long long`, `short`, `unsigned int`, `long double`, etc. which are used in specific scenarios. Please refer to the official documentation for more details.

## Conditionals

Conditionals are used to make decisions in a program. We can use `if`, `else if`, and `else` statements to execute different blocks of code based on different conditions.

#### If-Else Statement

```cpp
int age = 25;

if (age >= 18) {
  cout << "You are an adult" << endl;
} else {
  cout << "You are a minor" << endl;
}
```

#### Ternary Operator

We can also use the ternary operator to write a more concise version of the above code.

```cpp
int age = 25;

string message = (age >= 18) ? "You are an adult" : "You are a minor";
cout << message << endl;
```

#### Nested If-Else Statement

We can also use nested if-else statements to check for multiple conditions.

```cpp
int age = 25;
bool hasLicense = true;

if (age >= 18) {
  if (hasLicense) {
    cout << "You can drive" << endl;
  } else {
    cout << "You cannot drive" << endl;
  }
} else {
  cout << "You are a minor" << endl;
}
```

#### Switch Statement

We can use the switch statement to execute different blocks of code based on different values of a variable.

```cpp
enum Weather {
   Sunny,
   Rainy,
   Cold
};

Weather today = Sunny;

switch (today) {
  case Sunny:
    cout << "It's sunny today" << endl;
    break;
  case Rainy:
    cout << "It's rainy today" << endl;
    break;
  case Cold:
    cout << "It's cold today" << endl;
    break;
  default:
    cout << "Invalid weather" << endl;
}
```

##### Enums

Enums are used to define a collection of constants. They are used to define a set of named integer constants.

```cpp
enum Weather {
   Sunny,
   Rainy,
   Cold
};
```

- `enum` is the keyword used to define an enumeration.
- `Weather` is the name of the enumeration.
- `Sunny`, `Rainy`, and `Cold` are the named constants.
- By default, the value of the first constant is 0, and the value of each subsequent constant is incremented by 1.
- We can also assign custom values to the constants.

```cpp
enum Weather {
   Sunny = 1,
   Rainy = 2,
   Cold = 3
};
```

## Loops

Loops are used to execute a block of code multiple times. We can use `for`, `while`, and `do-while` loops in C++.

#### For Loop

```cpp
for (int i = 0; i < 5; i++) {
  cout << i << endl;
}
```

#### While Loop

```cpp
int i = 0;

while (i < 5) {
  cout << i << endl;
  i++;
}
```

#### Do-While Loop

```cpp
int i = 0;

do {
  cout << i << endl;
  i++;
} while (i < 5);
```

All the above loops will print the following output -

```bash
0
1
2
3
4
```

The difference between the `while` and `do-while` loop is that the `do-while` loop will execute the block of code at least once, even if the condition is false.

#### Infinite Loop

Infinite loops are loops that run indefinitely. We can create an infinite loop using the following syntax -

```cpp
for (;;) {
  cout << "Hello, World!" << endl;
}
```

```cpp
while (true) {
  cout << "Hello, World!" << endl;
}
```

```cpp
do {
  cout << "Hello, World!" << endl;
} while (true);
```

This needs to be used with caution as it can lead to system crashes if not handled properly. It is generally used in scenarios where we want the program to run indefinitely, such as server applications.

## Functions

Functions are used to group a block of code that can be reused multiple times. We can define a function using the following syntax -

```cpp
void greet() {
  cout << "Hello, World!" << endl;
}
```

#### Function Parameters

We can also pass parameters to a function.

```cpp
float add(float a, float b) {
  return a + b;
}
```

In the above code -

- `float` is the return type of the function.
- `add` is the name of the function.
- `float a` and `float b` are the parameters of the function.
- `return a + b` is the return statement of the function.
- `void` is used when the function does not return any value.

#### Function Declaration and Definition

We can declare a function at the top of the file and define it later in the file.

```cpp
// function declaration
float add(float a, float b);

int main() {
  cout << add(5, 3) << endl; // 8
  cout << add(10, 5) << endl; // 15

  return 0;
}

// function definition
float add(float a, float b) {
  return a + b;
}
```

## Pointers

Pointers are used to store the memory address of another variable. This allows us to access the memory location of a variable and perform operations on it from a different location in the program.

#### Pointers with Functions

We can use pointers to modify the value of a variable from a function.

###### Without Pointers

```cpp
void myBirthday(int age) {
  age++;
  cout << "Happy Birthday! You are " << age << " years old" << endl;
}

int main() {
  int age = 25;
  cout << age << endl; // 25
  myBirthday(age); // Happy Birthday! You are 26 years old
  cout << age << endl; // 25
  return 0;
}
```

So, the value of `age` is not modified in the `main` function even though it is modified in the `myBirthday` function. This is because the `age` variable is passed by value to the `myBirthday` function and a copy of the variable is created in the function and only the copy is modified.

###### With Pointers

```cpp
void myBirthday(int *age) {
  (*age)++;
  cout << "Happy Birthday! You are " << *age << " years old" << endl;
}

int main() {
  int age = 25;
  cout << age << endl; // 25
  myBirthday(&age); // Happy Birthday! You are 26 years old
  cout << age << endl; // 26
  return 0;
}
```

In the above code -

- `int *age` is a pointer to an integer variable.
- `&age` is the memory address of the `age` variable.
- `(*age)++` is used to increment the value of the `age` variable.
- `*age` is used to dereference the pointer and access the value of the `age` variable.

#### Pointers with Arrays

We can use pointers to access the elements of an array. The name of the array is a pointer to the first element of the array.

```cpp
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr; // points to address of first element

cout << *ptr << endl; // 1
cout << ptr << endl; // 0x61feec
cout << &ptr << endl; // 0x61fee8


ptr++; // points to address of second element

cout << *ptr << endl; // 2
cout << ptr << endl; // 0x61fef0
```

In the above code -

- `int *ptr` is a pointer to an integer variable.
- `arr` is the name of the array and is a pointer to the first element of the array.
- `*ptr` is used to dereference the pointer and access the value of the `arr` variable.
- `ptr++` is used to increment the pointer to point to the next element of the array.
- `&ptr` is the memory address of the `ptr` variable.

## Classes and Objects

Classes are used to define a blueprint for creating objects. An object is an instance of a class.

###### Class Declaration

```cpp
class Person {
  public:
    string name;
    int age;
};
```

In the above code -

- `class` is the keyword used to define a class
- `Person` is the name of the class
- `public` is the access specifier
- `string name` and `int age` are the data members of the class

###### Object Creation

```cpp
int main() {
  Person person1;
  person1.name = "John Doe";
  person1.age = 25;

  cout << person1.name << endl; // John Doe
  cout << person1.age << endl; // 25

  return 0;
}
```

In the above code -

- `Person` is the name of the class
- `person1` is the name of the object
- `person1.name` and `person1.age` are the data members of the object
- `.` is the member access operator

#### Access Specifiers

- `public` - Members are accessible from outside the class
- `private` - Members are only accessible from within the class
- `protected` - Members are accessible from within the class and its derived classes
- By default, the access specifier is `private`

```cpp
class Person {
  private:
    string name;
    int age;
};
```

### Constructors

Constructors are functions that are automatically called when an object is created from a class. They make it easy to initialize the object.

There are 2 rules for constructors -

1. The constructor has the same name as the class.
2. The constructor does not have a return type.

###### Creating a Constructor

```cpp
class Person {
  public:
    string name;
    int age;

    Person(string name, int age) {
      name = name;
      age = age;
    }
};
```

In the above code -

- `Person` is the name of the class
- `Person(string name, int age)` is the constructor
- `name` and `age` are the parameters of the constructor

###### Object Creation with Constructor

```cpp
int main() {
  Person person1("John Doe", 25);

  cout << person1.name << endl; // John Doe
  cout << person1.age << endl; // 25

  return 0;
}
```

### Class Methods

Methods are functions that are defined inside a class. They can be used with objects of the class. Methods have access to the data members of the class.

###### Creating a Method

```cpp
class Person {
  public:
    string name;
    int age;

    Person(string name, int age) {
      name = name;
      age = age;
    }

    void display() {
      cout << "Name: " << name << ", Age: " << age << endl;
    }
};
```

###### Using a Method

```cpp
int main() {
  Person person1("John Doe", 25);
  person1.display(); // Name: John Doe, Age: 25

  return 0;
}
```

### Encapsulation

Encapsulation is used to restrict access to the members of a class and to prevent the data from being modified by accident.

- Access specifiers are used to implement encapsulation
- `public` members are accessible from outside the class
- `private` members are only accessible from within the class
- Can create public methods to access (get) and modify (set) private members

```cpp
class Person {
  private:
    string Name;
    int Age;

  public:
    // Setters
    void setName(string name) {
      Name = name;
    }
    void setAge(int age) {
      Age = age;
    }

    // Getters
    string getName() {
      return Name;
    }
    int getAge() {
      return Age;
    }
};
```

In the above code -

- `setName` and `setAge` are the setter methods
- `getName` and `getAge` are the getter methods
- `Name` and `Age` are the private members and cannot be accessed directly from outside the class

###### Using Encapsulation

```cpp
int main() {
  Person person1;
  // person1.Name = "John Doe"; // error
  person1.setName("John Doe");
  person1.setAge(25);

  cout << person1.getName() << endl; // John Doe
  cout << person1.getAge() << endl; // 25

  return 0;
}
```

Since the `Name` and `Age` members are private, we cannot access them directly from outside the class.

### Inheritance

Inheritance is used to create a new class from an existing class. The new class is called the derived class and the existing class is called the base class.

###### Creating a Base Class

```cpp
class Animal {
  private:
    string Name;
    int Age;

  public:
    Animal(string name, int age) {
      Name = name;
      Age = age;
    }

    void eat() {
      cout << "Eating..." << endl;
    }

    void sayName() {
      cout << "My name is " << Name << endl;
    }
};
```

###### Creating a Derived Class

```cpp
class Dog : public Animal {
  public:
    // Dog constructor (calls Animal constructor)
    Dog(string name, int age) : Animal(name, age) {
    }

    // Dog method (overrides Animal method, if any)
    void bark() {
      cout << "Barking..." << endl;
    }
};
```

In the above code -

- `Dog` is the name of the derived class
- `: public Animal` is used to inherit from the `Animal` class
- `Dog(string name, int age) : Animal(name, age)` is the constructor of the `Dog` class that calls the constructor of the `Animal` class
- `bark` is a method of the `Dog` class
- `Dog` inherits the `eat` and `sayName` methods from the `Animal` class

###### Using Inheritance

```cpp
int main() {
  Dog dog1("Buddy", 5);
  dog1.eat(); // Eating...
  dog1.sayName(); // My name is Buddy
  dog1.bark(); // Barking...

  return 0;
}
```

### Polymorphism

Polymorphism is used to perform a single action in different ways. It allows us to define a method in the base class and override it in the derived class.

###### Creating a Base Class

```cpp
class Animal {
  public:
    void sound() {
      cout << "Animal sound" << endl;
    }
};
```

###### Creating a Derived Class

```cpp
class Dog : public Animal {
  public:
    void sound() {
      cout << "Barking..." << endl;
    }
};

class Cat : public Animal {
  public:
    void sound() {
      cout << "Meowing..." << endl;
    }
};
```

In the above code -

- `sound` is a method of the `Animal` class
- `Dog` and `Cat` inherit the `sound` method from the `Animal` class
- `sound` is overridden in the `Dog` and `Cat` classes

**Overriding** - When a method in the derived class has the same name and signature as a method in the base class, it is called overriding. The method in the derived class overrides the method in the base class.

###### Using Polymorphism

```cpp
int main() {
  Dog dog1;
  dog1.sound(); // Barking...

  Cat cat1;
  cat1.sound(); // Meowing...

  return 0;
}
```
