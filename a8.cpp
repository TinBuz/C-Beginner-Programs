/*
Assignment: Distance Traveled a8.cpp
Name: Tin Buzancic
Professor Wang
4/13/14
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int speed, time, distance;
	
    
    cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;
	cout << "How many hours has the vehicle traveled? ";
	cin >> time;
	cout << setw(10)<<left<< "Hour"<<setw(10)<<right<<"Distance "<<"Traveled\n";
	cout << "--------------------------------\n";
	for (int i=1;i<=time;i++)
	{
		distance = speed * i;
		cout <<" "<<setw(10)<<left<<i<<setw(10)<<right<<distance<<endl;
	}

    system("pause");
	return 0;

}
