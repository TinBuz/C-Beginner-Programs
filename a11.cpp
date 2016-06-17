/*
Course: CIS-165 Largest/Smallest Array Values
Name: Tin Buzancic
Professor Wang
*/

#include <iostream>
using namespace std;

double getSmallest(double n[],int size);
double getLargest(double n[],int size);

int main()
{
	const int SIZE = 10;
	double number[SIZE];
	cout << "Please enter 10 values into an array: \n";
	for (int i=0;i<SIZE;i++)
		cin >> number[i];

	double largest = getLargest(number,SIZE);
	double smallest = getSmallest(number,SIZE);
	cout << "The largest values stored in the array is " << largest<<".\n";	
	cout << "The smallest values stored in the array is " << smallest<<".\n";	

    system("pause");
	return 0;
}

double getLargest(double n[],int size)
{
	double largest =n[0];
	for (int i = 1; i < size; i++)
	{
		if (n[i] > largest)
			largest = n[i];
	}
	return largest;
}
double getSmallest(double n[],int size)
{
	double smallest=n[0];
	for (int i = 1; i < size; i++)
	{
		if (n[i] < smallest)
			smallest = n[i];
	}

	
system("pause");
return 0;
}
