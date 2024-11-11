// MathTutor.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
File name: MathTutor.cpp
Programer: Ozair Ghaissi	
Date: 11/09/2024
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int num1 = rand() % 1000; // Random number between 0 and 999
    int num2 = rand() % 1000; // Random number between 0 and 999

    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "Press Enter to see the answer...";
    cin.ignore();

    int answer = num1 + num2;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------" << endl;
    cout << "  " << answer << endl;

    return 0;
}