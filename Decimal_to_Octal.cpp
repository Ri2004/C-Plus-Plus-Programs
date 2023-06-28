//Decimal to Octal
#include<iostream>
using namespace std;
void dec_to_octal(int n)
{
	int oct,i=0,ar[50],s,j;
	
	while(n>0)
	{
		oct = n%8;
		ar[i] = oct;
		n = n/8;
		i++;
	}
	
	cout<<"Equivalent Octal Value is: "<<endl;
	for(j=i-1; j>=0; j--)
		cout<<ar[j];	
}
int main()
{
	int dec;
	
	cout<<"Enter Decimal Value"<<endl;
	cin>>dec;
	
	dec_to_octal(dec);
}