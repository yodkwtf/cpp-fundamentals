#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr; // ptr points to the address of the first element in the array

  cout << "The value of the first element in the array is " << *ptr << endl;
  cout << "The address of the first element in the array is " << ptr << endl;
  cout << &ptr << endl; // prints the address of the pointer `ptr`

  ptr++; // ptr now points to the address of the second element in the array

  cout << "The value of the second element in the array is " << *ptr << endl;
  cout << "The address of the second element in the array is " << ptr << endl;

  return 0;
}