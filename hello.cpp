//This is a program that will talk to you about your day and give you a few suggestions on what to get for lunch

#include <iostream>

using namespace std;

int main () {

string name;
string mood;
string food;

std::cout << "\nPlease enter your name:" << endl;

std::cin >> name;

{std::cout << "Hello " << name << "," << " how're you doing today?" << endl; 

cin.ignore();

std::getline (std::cin, mood);

//Add happy moods here
    
   if (mood == "good" || mood == "Pretty Good" || mood == "pretty good" || mood == "fine" || mood == "Fine" || mood == "great" || mood == "Great" || mood == "Good" || mood == "Fantastic" || mood == "Amazing" || mood == "Not bad" || mood == "amazing" || mood == "not bad"|| mood == "eh" || mood == "Not bad") 

        {std::cout << "I'm glad you're doing " << mood << "."  << endl;} 

//Add sad moods here

   else if (mood == "bad" || mood == "Bad" || mood == "not good" || mood == "Not Good" || mood == "shitty" || mood == "horrible" || mood == "really bad" || mood == "Really bad" || mood == "Terrible" || mood == "poopy" || mood == "Poopy" || mood == "really terrible" || mood == "really not good")

        {std::cout << "I'm sorry you're feeling " << mood << " today." << endl;}

   else
        {std::cout << "That's a new response, I'm not quite sure how to react to that.." << endl;}
}
std::cout << "What do you think you'll be getting for lunch today" << endl;

std::cin >> food;

if (food == "gtpc")

{std::cout << "Good choice my g!" << endl;}

else 

{std::cout << "Why don't you get Jersey Mikes!" << endl;}

return 0;

}