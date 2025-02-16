/*Program File Name: Chapter3Exercise17Part2
Programmer: Patrick Liao
Date: 2.16.2025
Requirements: Display 2 random numbers to be added, allow user to enter answer, then show solution with an error check */

#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

int main()
{
    random_device numGen;
    uniform_int_distribution<int> randomInt(0, 999);
    int answer;
    int numberone = randomInt(numGen);
    int numbertwo = randomInt(numGen);
    int solution = numberone + numbertwo;                                                       //Define variables and set up random number generatoir

    cout <<"Please solve the following addition problem:\n"
        << left << setw(3) << " " << numberone << endl
        << setw(3) << "+" << numbertwo << endl
        << "------" << endl << endl
        << "When you are ready to answer, please enter in your answer to continue: ";           //Display problem and prompt

    cin>> answer;                                                                               //Store user answer

    cout << left << endl << setw(3) << " " << numberone << endl
        << setw(3) << "+" << numbertwo << endl
        << "------" << endl
        << right <<setw(6)<<solution;                                                           //Display solution

    if (answer == solution)
        cout << "\nYou are correct!\n";
    else
        cout << "\nYou are incorrect!\n";                                                         //Check the user's answer and display message. 
        
    return 0;
}