/*
Tin Buzancic
Prof. Wang
Assignment 4 - Magic Dates
3/15/14
*/

#include <iostream>
using namespace std;

int main()
{
    int month, day ,year;
    
    cout<<"Enter a month (in numeric form): ";
    cin>>month;
    cout<<"Enter a day(1-31): ";
    cin>>day;
    cout<<"Enter a two-digit year: ";
    cin>>year;
    
    cout<<month<<"/"<<day<<"/"<<year<<endl;
    
    if(month * day == year)
    cout << "The date is MAGIC ! \n";
    else
    cout << "The date is NOT magic \n";

    system("pause");

    return 0; 
}
