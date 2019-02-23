#include "Mortgage.h"
#include<iostream>
#include<iomanip>
using namespace std;
// main goes here. Code that *uses* the Mortgage class
// goes in this file

int main()
{
	//Instance of mortgage
	Mortgage house;
	int Years; //Holds Years the user enters
	double Loan, Rate; //holds loans and the rate the user puts in


	//Asks User the questions
	cout << "How much of a loan did you take out? $";
	cin >> Loan;

	cout << "What's the rate of the loan? ";
	cin >> Rate;

	cout << "How many years do you want to pay it off? ";
	cin >> Years;

	//Gathers all info manipulates it for future use
	house.GetInfo(Loan, Rate, Years);

	//Displays amounts
	cout << "This is what you'll pay per month $" << fixed<< setprecision(2) << house.MonthlyPayment() << endl;
	cout << "This is how much you'll pay all together $" << fixed << setprecision(2)<< house.TotalPayment() << endl;

	return 0;
}