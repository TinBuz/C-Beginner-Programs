/*
Assignment: Sum of Numbers a7.cpp
Name: Tin Buzancic
Professor Wang
4/13/14
*/


#include <iostream>
using namespace std;

int main()
{
	int num,sum;
	cout << "Enter a positive integer: ";
	cin >> num;

	for (;num<=0;)
	{
		cout << "Please enter a positive integer value: ";
		cin >> num;
	}

	sum = 0;

	for (int n = 1; n<=num; n++)
	{
		sum+=n;
	}

	cout << "The sum of all integers from 1 up to " << num << " is " << sum << ". \n";
    

	system("pause");
	return 0;
}
