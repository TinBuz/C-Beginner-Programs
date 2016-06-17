/*
Course: CIS-165 Extra Credit
Name: Tin Buzancic
Professor Wang
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	int floors, 
        flrRm,
        flrRmin, 
        totalRmout, 
        totalRm=0, 
        totalRmin=0;
        
	double percent;
	
	cout << "Please enter the total floor number of this hotel: ";
	cin >> floors;
	for (;floors<1;)
	{
		cout << "We do not accept total number of floors less than 1\n";
		cout << "Please enter the total floor number again: ";
		cin >> floors;
	}
	for (int i=1;i<=floors;i++)
	{
		cout << "Please enter the number of rooms in floor " << i <<": ";
		cin >> flrRm;
		for (;flrRm<10;)
		{
			cout << "Do not accept rooms number in a floor less than 10.\n";
			cout << "Please enter the number of rooms in floor " <<i <<", again: ";
			cin >> flrRm;
		}
		cout << "How many rooms are occupied in floor " <<i<<": ";
		cin >> flrRmin;
		totalRm += flrRm;
		totalRmin += flrRmin;
	}
	totalRmout = totalRm - totalRmin;
	percent = static_cast<double>(totalRmin) / totalRm * 100;
	cout << "The total number of rooms in this hotel is " << totalRm<<". \n";
	cout << "The number of rooms that are occupied is " << totalRmin<<". \n";
	cout << "The number of rooms that are unoccupied is " << totalRmout<<". \n";
	cout << "The percentage of rooms that are occupied is " << percent <<"%. \n";


    system("pause");
	return 0;
}
