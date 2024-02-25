## Introduction to C++

C++ is a general-purpose programming language that was developed by Bjarne Stroustrup in 1979. It is an extension of the C programming language, and is still one of the fastest abd most efficient programming languages available today.

It is used by companies like Adobe, Microsoft, Google, NASA, and many more. Every 3 years, a new version of C++ is released, which adds new features to the language.

#### Applications of C++

C++ is one of the most popular programming languages in the world. It is used in a variety of applications, including:

- High Performance Applications
- Video Games
- Device Drivers
- Web Browsers
- Servers
- Operating Systems

#### Mastering C++

To master C++, we need to learn 2 things:

1. The syntax and semantics of the language itself
2. C++ Standard Library (STL) - A collection of classes and functions that are part of the C++ Standard Library for example, algorithms, containers, iterators, etc.

## Writing C++ Programs

Let's cover how and where to write C++ programs.

#### Popular IDEs for C++

There are many IDEs available for C++, some of them are free and some are paid. Some of the popular ones are:

- Visual Studio
- Xcode
- CLion

#### First C++ Program

- A C++ program is a collection of functions, and every C++ program must have a `main` function
- The `main` function is the entry point of the program, and it is called when the program is executed
- The `main` function returns an integer value, which is used to indicate the status of the program

> Note: C++ is case-sensitive, so `main` and `Main` are different functions.

```cpp
#include <iostream>

int main() {
  std::cout << "Hello World!" << std::endl;
  return 0;
}
```

- The `#include <iostream>` directive tells the compiler to include the iostream library, which provides input and output functionality
- `cout` stands for "character output"

#### Compiling and Running C++ Programs

C++ is a compiled language, which means to run a C++ program, we need to compile it first. The compilation process translates the source code into machine code that can be executed by the computer.

## Variables

Variable is the name of the location in memory where we store data. It is the basic unit of storage in a C++ program.

#### Constants

A constant is a value that cannot be altered by the program during normal execution. It is a type of variable that is used to store a value that does not change.

```cpp
const pi = 3.14;
```

This will prevent the value of `pi` from being accidentally changed.

#### Naming Conventions

- Always use meaningful names for variables
- Variables names can follow any case convention (camelCase, snake_case, etc.)
- It depends on the organization's coding standards

## Mathematical Operators

C++ provides a variety of operators that can be used to perform mathematical operations.

###### Common Arithmetic Operators

```cpp
double a = 10;
int b = 20;

// Addition
double sum = a + b;
cout << "Sum: " << sum << endl; // 30

// Subtraction
double difference = a - b;
cout << "Difference: " << difference << endl; // -10

// Multiplication
double product = a * b;
cout << "Product: " << product << endl; // 200

// Division
double quotient = a / b;
cout << "Quotient: " << quotient << endl; // 0.5

// Modulus
int remainder = b % a;
cout << "Remainder: " << remainder << endl; // 0

// Increment
a++;
cout << "Increment: " << a << endl; // 11

// Decrement
b = b - 1;
cout << "Decrement: " << b << endl; // 19
```

#### Order of Operations

The order of operations in C++ is the same as in mathematics. The following table lists the precedence and associativity of C++ operators.

| Precedence | Operator | Description                       |
| ---------- | -------- | --------------------------------- |
| 1          | ()       | Parentheses                       |
| 2          | \* / %   | Multiplication, Division, Modulus |
| 3          | + -      | Addition, Subtraction             |

This can be referred to as BODMAS (Brackets, Orders, Division and Multiplication, Addition and Subtraction).

###### Code Example

```cpp
int result = 10 + 20 * 30;
cout << "Result: " << result << endl; // 610
```

## The Standard Library

The C++ Standard Library is a collection of classes and functions that are part of the C++ Standard Library. It is a powerful tool that can be used to perform a variety of tasks.

#### Writing to the Console

The `iostream` library provides the `cout` object, which is used to print text to the console.

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  return 0;
}
```

- The `<<` operator is used to insert data into the `cout` object
- The `endl` object is used to insert a newline character into the `cout` object
- The `using namespace std` directive tells the compiler to use the `std` namespace, which contains the `cout` object

#### Reading from the Console

The `iostream` library also provides the `cin` object, which is used to read input from the console.

```cpp
#include <iostream>
using namespace std;

int main() {
  int age;
  cout << "Enter your age: ";
  cin >> age;
  cout << "Your age is: " << age << endl;
  return 0;
}
```

- The `>>` operator is used to extract data from the `cin` object
- The `int age` statement declares a variable called `age` of type `int`
- The `cin >> age` statement reads an integer value from the console and stores it in the `age` variable
- The `cout << "Your age is: " << age << endl` statement prints the value of the `age` variable to the console
