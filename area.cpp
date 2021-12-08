//This is a program that will compute the total area and perimeter of a given square

#include <iostream>

using namespace std;

int main()

{

double length;
double width;
double perimeter;
double area;

std::cout << "\nThis program will determine the perimeter and area of a given square." << endl;

std::cout << "Please enter the length:";
std::cin >> length;

std::cout << "Please enter the width:";
std::cin >> width;

perimeter = 2 * (length + width);
area = (length * width);

std::cout << "The perimeter of your square is " << perimeter << "." << endl;
std::cout << "The area of your square is " << area << "." << endl << endl;

return 0;

}