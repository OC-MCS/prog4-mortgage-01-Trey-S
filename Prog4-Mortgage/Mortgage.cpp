//Trey Scheurer
//02-20-19
//Programming 2

#include "Mortgage.h" // For Mortgage class
#include <cstdlib> // Needed for the exit function
#include <math.h> //for using compounding
// implementation file for Mortgage class

//Prototypes
double CalcTotal(double Loan, double Rate, int Months);
void CheckNumber(double L, double R, int Y);

//Defualt Class
Mortgage::Mortgage()
{}

//class if data in first shared
Mortgage::Mortgage(double L, double R, int Y)
{
	GetInfo(L,R,Y);
}

//initilaizes all data need for the next steps checks if they're valid
void Mortgage::GetInfo(double L, double R, int Y)
{
	//Check if user enter invalid numbers
	CheckNumber(L, R, Y);
	
	Loan = L; //holds Loan
	Rate = (R / 100) / 12; //Changes rate to be used 
	Months = Y * 12; //Puts years into month

}

//Calcs the Monthly Payment
double Mortgage::MonthlyPayment()
{ 
	return CalcTotal(Loan, Rate, Months);
}

//Times monthly payment to the amount of months within the payment
double Mortgage::TotalPayment()
{
	double Payment = CalcTotal(Loan, Rate, Months);

	return (Payment * Months);
}

//Calcs total of monthly payment
double CalcTotal(double Loan, double Rate, int Months)
{
	double Payment; //Holds payment


	//Equation for monthly payment
	Payment = Loan *
		((Rate * (pow((1 + Rate), Months)))
			/
			((pow((1 + Rate), Months)) - 1));


	return Payment;
}

//Checks for negative numbers;
void CheckNumber(double L, double R, int Y)
{
	if (L < 0 || R < 0 || Y < 0)
	{
		exit(EXIT_FAILURE);
	}
}






////Finds out total amount Paid;
//double Mortgage::totalAmount()
//{
//	double Total = Loan * Rate * Years;
//
//	return Total;
//}
//
////INTERNAL FUNCTIONS



