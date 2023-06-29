//Binary to Octal
#include<iostream>
#include<cmath>
using namespace std;
void dectooctal(int n)
{
	int oct,i=0,ar[50],j;
	
	while(n>0)
	{
		oct = n%8;
		ar[i]=oct;
		n = n/8;
		i++;
	}
	
	cout<<"Equivalent Octal Value is: "<<endl;
	for(j=i-1; j>=0; j--)
		cout<<ar[j];	
}
int main()
{
	int dec=0,rem,i=0;
	long bin;
	cout<<"Enter Binary Value"<<endl;
	cin>>bin;
	
	while(bin!=0)
	{
		rem = bin%10;
		dec = dec + rem*pow(2,i);
		bin = bin/10;
		i++;
	}
	
	dectooctal(dec);
}