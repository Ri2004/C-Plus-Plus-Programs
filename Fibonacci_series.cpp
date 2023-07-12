//Fibonacci Series
#include<iostream>
using namespace std;

void fibonacci(int n);
int main()
{
	int num;
	cout<<"Enter A Number"<<endl;
	cin>>num;
	
	fibonacci(num);
}
void fibonacci(int n)
{
	cout<<"Fibonacci Series: ";
	int previous_num = 0, current_num = 1, next_num;
	cout<<previous_num<<" "<<current_num<<" "; 
	next_num = previous_num + current_num;
	
	
	while(next_num<n)
	{
		cout<<next_num<<" ";
		previous_num = current_num;
		current_num = next_num;
		next_num = previous_num + current_num;
	}
}