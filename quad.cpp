//This program will give the x-intercepts of a polynomial in standard form - using the quadratic formula 

#include <iostream>
#include <cmath>

using namespace std;

int main()

{

double a, b, c;

double a1, b1, c1, d1;

double a2;

double a3;

double x1, x2;

std::cout << "This is a program that will solve the quadratic formula" << endl
          << "Please enter the polynomial in standard form (a,b,c)" << endl;

std::cout << "a:";
std::cin >> a;

std::cout << "b:";
std::cin >> b;

std::cout << "c:";
std::cin >> c;

a1 = b * -1;
b1 = b * b;
c1 = 4 * a * c;
d1 = 2 * a;

a2 = b1 - c1;
a3 = sqrt (a2);

x1 = (a1 + a3) / d1;
x2 = (a1 - a3) / d1;

std::cout << "X = " << x1 << endl;
std::cout << "and" << endl;
std::cout << "X = " << x2 << endl;

return 0;

}
