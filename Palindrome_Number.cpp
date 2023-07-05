//Palindrome
#include<iostream>
using namespace std;

int main()
{
	int a,b,temp,reverse=0;
	
	cout<<"Enter First Number"<<endl;
	cin>>a;
	
	temp = a;
	
	while(a>0)
	{
		b = a%10;
		reverse = reverse *10 +b;
		a = a/10;
	}
	if(temp == reverse)
	{
		cout<<temp<<" is a Palindrome Number";
	}
	else
	{
		cout<<temp<<" is not a Palindrome Number";
	}
}