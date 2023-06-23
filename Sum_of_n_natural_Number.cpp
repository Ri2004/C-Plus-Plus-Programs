// Sum of n natural numbers
#include<iostream>
using namespace std;
int main()
{
	int a,sum=0;
	cout<<"Enter A Number"<<endl;
	cin>>a;
	for(int i=1; i<=a; i++)
	{
		sum += i;
	}
	cout<<"The Sum of "<<a<<" numbers are: "<<sum;
}