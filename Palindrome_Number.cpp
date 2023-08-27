//Palindrome
#include<iostream>
using namespace std;

int main()
{
	int a,b,temp,reverse=0;
	
	cout<<"Enter First Number"<<endl;
	cin>>a;
	
	temp = a;
	
	while(temp>0)
	{
		b = temp%10;
		reverse = reverse *10 +b;
		temp = temp/10;
	}
	if(a == reverse)
	{
		cout<<a<<" is a Palindrome Number";
	}
	else
	{
		cout<<a<<" is not a Palindrome Number";
	}
}