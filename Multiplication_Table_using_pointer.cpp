//Multiplication Table using Pointer
#include<iostream>
using namespace std;
int main()
{
	int a,n,i;
	int *p;
	
	cout<<"Enter A Number"<<endl;
	cin>>a;
	
	cout<<"Enter Limit of Multiplying value"<<endl;
	cin>>n;
	
	p=&a;
	
	for(i=1; i<=n; i++)
	{
		cout<<*p<<" * "<<i<<" = "<<*p * i<<endl;
	}
}