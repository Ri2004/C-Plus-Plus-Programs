//Octal to Binary
#include<iostream>
#include<cmath>
using namespace std;
void dectobinary(int n)
{
	int bin,i=0,ar[50],s,j;
	
	while(n>0)
	{
		bin = n%2;
		ar[i]=bin;
		n = n/2;
		i++;
	}
	
	cout<<"Equivalent Binary Value is: "<<endl;
	for(j=i-1; j>=0; j--)
		cout<<ar[j];	
}
int main()
{
	int oct,bin,dec=0,rem,i=0;
	cout<<"Enter Octal Value"<<endl;
	cin>>oct;
	
	while(oct!=0)
	{
		rem = oct%10;
		dec = dec + rem*pow(8,i);
		oct = oct/10;
		i++;
	}
	
	dectobinary(dec);
}