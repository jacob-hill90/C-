//This program will read test scores and tell you the averge scores of the class

#include <iostream> 

using namespace std;

int main () {

    int test1, test2, test3, test4, test5;
    double average;

    std::cout << "Please enter each test score with 1 space in-between" << endl;

    std::cin >> test1 >> test2 >> test3 >> test4 >> test5;

    average = (test1 + test2 + test3 + test4 + test5) / 5;

    if (test1 < average)

    std::cout << "Test1 was less than average" << endl;

    if (test2 < average)

    std::cout << "Test2 was less than average" << endl;

    if (test3 < average)

    std::cout << "Test3 was less than average" << endl;

    if (test4 < average)

    std::cout << "Test4 was less than average" << endl;

    if (test5 < average) 

    std::cout << "Test5 was less than average" << endl;

    return 0;

}