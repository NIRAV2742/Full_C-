#include <iostream>
using namespace std;
int main()
{
  int num1, num2, st;
  cout << "enter two number\n";
  cin >> num1 >> num2;
  st = num1 + num2;
  cout << "\nSum is : " << st;
  st = num1 - num2;
  cout << "\nSubstraction is : " << st;
  st = num1 * num2;
  cout << " \nMUltiply is : " << st;
  st = num1 / num2;
  cout << "\nDevision is : " << st;
  st = num1 % num2;
  cout << "\nModulo is : " << st;
}