//LCM
#include<iostream>
using namespace std;
int main()
{
	int a,b,lcm,i,quote1,quote2;
	cout<<"Enter First Number"<<endl;
	cin>>a;
	
	cout<<"Enter Second Number"<<endl;
	cin>>b;
	
	for(i=1; i<=a&&i<=b; i++)
	{
		quote1 = a/i;
		quote2 = b/i;
		
		if(a%i==0 && b%i==0)
			lcm = (i*quote1*quote2);
	}
	cout<<"The LCM of "<<a<<" and "<<b<<" is: "<<lcm;
}