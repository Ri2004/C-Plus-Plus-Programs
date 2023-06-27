//Factorial Using Recursion
#include<iostream>
using namespace std;

int factorial_recursive(int n);

int main()
{
	int a,fact;
	
	cout<<"Enter A Number"<<endl;
	cin>>a;
	
	fact = factorial_recursive(a);
	cout<<"The Factorial Of "<<a<<" is: "<<fact;
}
int factorial_recursive(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return(n*factorial_recursive(n-1));
	}
}