//
// Created by Thavarshan Thayananthajothy on 2021-01-21.
//
#include <iostream>

using namespace std;

int main()
{
    double length, cmUnit = 30.48;;

    cout << "Please enter a length in (Ft): ";
    cin >> length;

    double result = length * cmUnit;

    cout << length << "Ft is " << result << "cm" << endl;
}
