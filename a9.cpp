/*
Assignment: Average Railfall
Name: Tin Buzancic
Date: 4/24/14
Professor Wang
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int years, 
		months = 0;

	double  monthlyRain, 
			totalRain=0,
			averageRain;


	cout << "Enter the number of years: ";
	cin >> years;
	for (;years<1;)
	{
		cout << "Invalid number of years.\nPlease enter again: ";
		cin >> years;
	}
	for (int y=1; y<=years;y++)
	{
		for (int m=1;m<=12;m++)
		{
			cout << "Enter the number of monthly rainfall in inches for month "<< m<<" year "<<y<<": ";
			cin >> monthlyRain;
			for (;monthlyRain<0;)
			{
				cout << "Invalid.\nPlease enter again: ";
				cin >> monthlyRain;
			}
			totalRain += monthlyRain;
			months++;
		}
	}
	averageRain = totalRain / months;
	cout << "The number of months is " << months<<". \n";
	cout << "The total inches of rainfall is " << totalRain <<". \n";
	cout << "The average rainfall per month for the entire period is " << averageRain << "inches. \n";

	system("pause");
	return 0;
}
