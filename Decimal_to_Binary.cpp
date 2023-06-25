//Decimal to Binary
#include<iostream>
using namespace std;
int main()
{
	int num,num1,i=0,arr[200],j;
	cout<<"Enter A Number"<<endl;
	cin>>num;
	
	cout<<"Equivalent Binary Number is:"<<endl;
	while(num>0)
	{
		num1 = num%2;
		arr[i]=num1;
		num = num/2;
		i++;
	}
	for(j=i-1; j>=0; j--)
	{
		cout<<arr[j];
	}
}