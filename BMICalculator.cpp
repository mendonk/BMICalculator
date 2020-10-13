//Body Mass Index (BMI) Program
//This program willl calculate BMI based on user's inputted height and weight.

#include <StdAfx.h>
#include <iostream>
using namespace std;

int main()
	{
		//declaring variables

		float weight;
		float height;
		float bodyMassIndex;

		//greeting

		cout << "\nThank you for choosing Happy Valley Fitness Center, where we care about your health!" << endl;
		cout << "\nTo make an individualt fitness plan for your unique body, we must first calculate your Body Mass Index, or BMI. This number is your weight (in pounds) multiplied by 703, then divided by your height (in inches)." << endl;
		cout << "\nLet's get to work! Please enter your weight in pounds and press ENTER." << endl;
		cin >> weight;
		cout << "\nThank you. Please enter your height in inches and press ENTER." << endl;
		cin >> height;
		bodyMassIndex = (weight * 703) / height;
		cout << "\nThank you. Your Body Mass Index is " << bodyMassIndex << "." << endl;
		cout << "Using this number, we can create a fitness plan to suit your needs. Thanks again for choosing Happy Valley Fitness Center!" << endl;

		return 0;
	}