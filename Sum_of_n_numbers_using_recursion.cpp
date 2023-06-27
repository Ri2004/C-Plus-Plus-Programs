//Sum of natural numbers using recursion
#include<iostream>
using namespace std;

int add(int n);

int main()
{
	int a,sum;
	cout<<"Enter A Number"<<endl;
	cin>>a;
	
	sum = add(a);
	cout<<"The Sum Of Numbers are: "<<sum;
}
int add(int n)
{
	if(n==1)
	{
		return 1;
	}
	else 
	{
		return (n + add(n-1));
	}
}