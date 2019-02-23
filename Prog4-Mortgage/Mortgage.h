#pragma once
// header file for Mortgage class
class Mortgage
{
	private:
		//Holds all info to finance mortagage
		double Payment;
		double Loan;
		double Rate;
		double Term;
		int Months;
	public:
			//	 Loan,   Rate,   Year
		Mortgage(double, double, int);
		Mortgage();
		void GetInfo(double, double, int);
		double MonthlyPayment();
		double TotalPayment();
};