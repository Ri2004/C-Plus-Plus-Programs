//Prime Or Not
#include<iostream>
using namespace std;
int main()
{
	int a;
	bool prime = true;
	cout<<"Enter A Number"<<endl;
	cin>>a;
	
	if(a==0 || a==1)
	{
		prime = false;
	}
	for(int i=2; i*i<=a; i++)
	{
		if(a%i==0)
		{
			prime = false;
			break;
		}
	}
	if(prime)
	{
		cout<<a<<" is a Prime Number";
	}
	else
	{
		cout<<a<<" is not a Prime Number";
	}
}