//Find largest among three numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter First Number"<<endl;
	cin>>a;
	
	cout<<"Enter First Number"<<endl;
	cin>>b;
	
	cout<<"Enter First Number"<<endl;
	cin>>c;
	
	if(a>b)
	{
		if(a>c)
		{
			cout<<a<<" is greatest";
		}
		else
		{
			cout<<c<<" is greatest";
		}
	}
	else if(b>c)
	{
		cout<<b<<" is greatest";
	}
	else
	{
		cout<<c<<" is greatest";
	}
}