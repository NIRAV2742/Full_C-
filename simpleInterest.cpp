#include <iostream>
using namespace std;
int main()
{
  float amount_p = 10000, rate = 1.4, time = 18; // time in month's
  float si = amount_p * rate * time / 100;
  cout << "Interest is : " << si;
}