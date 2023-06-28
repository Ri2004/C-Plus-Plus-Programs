//Octal to Decimal
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int oct,dec=0,rem,i=0;
	cout<<"Enter Octal Value"<<endl;
	cin>>oct;
	
	while(oct!=0)
	{
		rem = oct%10;
		dec = dec + rem*pow(8,i);
		oct = oct/10;
		i++;
	}
	cout<<"Equivalent Decimal Value is: "<<dec;
}