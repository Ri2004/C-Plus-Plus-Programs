//Binary to Decimal
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int bin,dec=0,rem,i=0;
	cout<<"Enter Binary Value"<<endl;
	cin>>bin;
	
	while(bin!=0)
	{
		rem = bin%10;
		dec = dec + rem*pow(2,i);
		bin = bin/10;
		i++;
	}
	cout<<"Equivalent Decimal Value is: "<<dec;
}