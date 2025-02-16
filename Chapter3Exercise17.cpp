/*Program File Name: Chapter3Exercise17
Programmer: Patrick Liao
Date: 2.16.2025
Requirements: Display 2 random numbers to be added, then show solution on user prompt */

#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

int main()
{
    random_device numGen;
    uniform_int_distribution<int> randomInt(0, 999);
    int numberone = randomInt(numGen);
    int numbertwo = randomInt(numGen);
    int solution = numberone + numbertwo;                                               //Define variables and set up random number generatoir

    cout << "Please solve the following addition problem:\n"
        << " " << numberone << endl
        << "+" << numbertwo << endl
        << "-----" << endl << endl
        << "When you are ready to answer, please press Enter to continue: ";            //Display problem and prompt

    cin.get();                                                                          //Detect user prompt

    cout << endl << " " << numberone << endl
        << "+" << numbertwo << endl
        << "-----" << endl
        << solution;                                                                    //Display solution
        

    return 0;
}