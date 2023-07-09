//Leap Year
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter The year"<<endl;
	cin>>year;
	
	if(year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
			{
				cout<<year<<" is a Leap Year";
			}
			else
			{
				cout<<year<<" is Not a Leap Year";
			}
		}
		else
		{
			cout<<year<<" is a Leap Year";
		}
	}
	else
	{
		cout<<year<<" is not a Leap Year";
	}
}