//Fibonacci using recursive
#include<iostream>
using namespace std;

int check_fibo(int n)
{
	if (n==0 || n==1)
		return n;
	else
		return check_fibo(n-1)+check_fibo(n-2);
}
int main()
{
	int num;
	cout<<"Enter A Number"<<endl;
	cin>>num;
	
	cout<<"Fibonacci Of "<<num<<" is: "<<check_fibo(num);
}