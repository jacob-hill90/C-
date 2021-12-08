//This program will take in inches and convert to feet with inches remaining

#include <iostream>

using namespace std;

int main()

{

    char again = 'y';

do

{    

    int inches;

    std::cout << "\nThis program will take in inches and convert to feet with inches remaining" << endl;

    std::cout << "Please enter the number of inches:" << endl;

    std::cin >> inches;

    std::cout << inches << " inches is equal to " << inches / 12 << " feet and " << inches % 12 << " inches" << endl;


    cout << "\nWould you like to repeat (y or n): ";
    cin >> again;

}

while (again == 'y');

    return 0;

}
