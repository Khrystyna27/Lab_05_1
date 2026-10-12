#include <iostream>
#include <cmath>
using namespace std;
 
double t(const double x); // прототип функції t(x) = 1 + sqrt(1 + x^2)
 
int main()
{
   double z;
   cout << "z = "; cin >> z;
 
   // t^2(y) означає (t(y))^2
   double t1 = t(1);                          // t(1)
   double inner = t1 + pow(t(t1), 2);         // t(1) + t^2(t(1))
   double numerator = t1 + pow(t(inner), 2);  // t(1) + t^2(inner)
   double denominator = 1 + sqrt(t(z + 1 + sqrt(t(z))));
 
   double c = numerator / denominator;
   cout << "c = " << c << endl;
   return 0;
}
 
double t(const double x) // визначення
{
   return 1 + sqrt(1 + x * x);
}

