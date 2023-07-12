//Fibonacci using iterative
#include<iostream>
using namespace std;

int check_fibo_iter(int n)
{
	int previous_num = 0;
	int current_num = 1, pre_previous_num, i;
	if (n==0 || n==1)
		return n;

	for(i=1; i<n; i++)
	{
		pre_previous_num = previous_num;
		previous_num = current_num;
		current_num = pre_previous_num + previous_num;
	}
	return current_num;
}
int main()
{
	int num;
	cout<<"Enter A Number"<<endl;
	cin>>num;
	
	cout<<"Fibonacci Of "<<num<<" is: "<<check_fibo_iter(num);
}