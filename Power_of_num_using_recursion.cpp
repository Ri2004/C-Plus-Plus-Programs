//Print Power of Number using recursion
#include<iostream>
using namespace std;

int powerofnum(int base,int n)
{	
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (base *powerofnum(base,n-1)); 
	}
}
int main()
{
	int base,power,result,i;
	
	cout<<"Enter Base Number"<<endl;
	cin>>base;
	
	cout<<"Enter Power Number"<<endl;
	cin>>power;
	
	result = powerofnum(base,power);
	
	cout<<"The Power is: "<<result;
}