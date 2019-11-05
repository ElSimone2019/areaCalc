// areaCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Variables to hold length, width, total area, total cost
	float length = 0;
	float width = 0;
	float totalArea = 0;
	float totalCost = 0;

	//input for length
	cout << "What is the length of your floor: ";
	cin >> length;

	//validation
	while (length < 1) {
		cout << "Length must be more than 1";
		cin >> length;
	}

	//input for width
	cout << "What is the width of your floor: ";
	cin >> width;

	//validation
	while (width < 1) {
		cout << "Width must be more than 1";
		cin >> width;
	}


}