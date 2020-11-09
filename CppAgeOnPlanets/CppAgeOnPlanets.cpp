// CppAgeOnPlanets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    cout << "Age on Planets\n";

    int earthAge;
    int jupiterYears = 12;
    double saturnYears = 29.4;
    int uranusYears = 84;
    int neptuneYears = 165;
    int plutoYears = 248;

    std::cout << "Please enter your current age" << endl;
    std::cin >> earthAge;
    std::cout << "\n" << endl;

    double jupiterAge = earthAge / jupiterYears;
    double saturnAge = earthAge / saturnYears;
    double neptuneAge = earthAge / neptuneYears;
    double uranusAge = earthAge / uranusYears;
    double plutoAge = earthAge / plutoYears;

    std::cout << "Earth Age: " << earthAge << "\n" << endl;
    std::cout << "Jupiter Age: " << jupiterAge << "\n" << endl;
    std::cout << "Saturn Age: " << saturnAge << "\n" << endl;
    std::cout << "Uranus Age: " << uranusAge << "\n" << endl;
    std::cout << "Neptune Age: " << neptuneAge << "\n" << endl;
    std::cout << "Pluto Age: " << plutoAge << "\n" << endl;
    system("pause");
}
