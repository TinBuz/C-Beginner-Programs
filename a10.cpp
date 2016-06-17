/*
Assignment: Sales Bar Chart
Name: Tin Buzancic
Date: 4/24/14
Professor Wang
*/

#include <iostream>
using namespace std;

int main()
{
	int store1,
		store2,
		store3,
		store4,
		store5;

	for (int i=1;i<=5;i++)
	{
		cout << "Enter today\'s sales for store "<<i<<": ";
		if(i==1)
			cin>>store1;
		if(i==2)
			cin>>store2;
		if(i==3)
			cin>>store3;
		if(i==4)
			cin>>store4;
		if(i==5)
			cin>>store5;
	}
	cout<<endl;
	cout<< "SALES BAR CHART\n";
	cout<< "(Each * = $ 100)\n";
	for (int i=1;i<=5;i++)
	{
		int star;
		cout<<"Store "<<i<<": ";
		if(i==1)
			star = store1/100;
		if(i==2)
			star = store2/100;
		if(i==3)
			star = store3/100;
		if(i==4)
			star = store4/100;
		if(i==5)
			star = store5/100;
		for (int n=0;n<star;n++)
			cout<<"*";
		cout <<endl;
	}
	
	system("pause");
	return 0;
}
