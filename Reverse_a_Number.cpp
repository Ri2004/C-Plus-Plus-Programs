//Reverse The Number
#include<iostream>
using namespace std;
int main()
{
	int num,num1;
	cout<<"Enter A Number"<<endl;
	cin>>num;
	
	cout<<"The Reverse Number is:"<<endl;
	while(num!=0)
	{
		num1 = num%10;
		cout<<num1;
		num = num/10;
	}
}