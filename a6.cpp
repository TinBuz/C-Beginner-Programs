/*
Course: CIS-165
Name: Tin Buzancic
Professor Wang
Assignment: Bank Charges, a6.cpp
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 int checks;
 double beginningBalance, feeOne, feeTwo, totalFees;

 cout << "Bank Charges\n\n";

 cout << "Enter beginning balance: $";
 cin >> beginningBalance;

 cout << setprecision(2) << fixed;
 if(beginningBalance <= 0)
 cout << "URGENT MESSAGE!! YOUR ACCOUNT IS OVERDRAWN!! \n\n";
 else
 {
 cout << "Enter number of checks written: ";
 cin >> checks;
 
 if(beginningBalance < 400)
 {
 feeOne = 15.00;
 }
 else
 {
 feeOne = 0.00;
 }

 if(checks > 0 && checks < 20)
 {
 feeTwo = checks * 0.10;
 }
 else if(checks >= 20 && checks <= 39)
 {
 feeTwo = checks * 0.08;
 }
 else if(checks >= 40 && checks <= 59)
 {
 feeTwo = checks * 0.06;
 }
 else if(checks >= 60)
 {
 feeTwo = checks * 0.04;
 }
 else if(checks < 0)
 {
 cout << "The number of checks CANNOT be negative!! \n\n";
 } 

 totalFees = feeOne + feeTwo;

 cout << "Monthly Fees";
 cout << "Low Balance fee: $" << feeOne << endl;
 cout << "Check fees: $" << feeTwo << endl;
 cout << "Total Monthly fees: $" << totalFees << "\n\n";
 }
 
 system("pause");
 return 0;
 }
