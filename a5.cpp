/*
Course: CIS-165
Name: Tin Buzancic
Professor Wang
Assignment: Time Calculator, a5.cpp
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 double seconds, hour, day;
 hour = 3600;
 day = 86400;

 cout <<"Time Calculator\n\n";

 cout << "Enter the number of seconds: ";
 cin >> seconds;

 cout << setprecision(2) << fixed;

 if(seconds >= 86400)
 {
 cout << "The seconds you entered = " << seconds/86400 << " days \n\n";
 }
 else if(seconds >= 3600)
 {
 cout << "The seconds you entered = " << seconds/3600 << " hours \n\n";
 }
 else if(seconds >= 60)
 {
 cout << "The seconds you entered = " << seconds/60 << " minutes \n\n";
 }
 else if(seconds < 60 && seconds > 0)
 {
 cout << "The seconds you entered = " << seconds << " seconds \n\n";
 }
 else
 {
 cout << "Please enter a valid time. \n\n";
 }
 
 system("pause");
 return 0;
}
