//Swappping variable using call by reference
#include<iostream>
using namespace std;

void call_address(int *add, int *add2)
{
	*add = *add + *add2;
	*add2 = *add - *add2;
	*add = *add - *add2;
	
	cout<<"After Swapping a= "<<*add<<" and b= "<<*add2;
} 
int main()
{
	int a,b,swap;
	
	cout<<"Enter First Number"<<endl;
	cin>>a;
	
	cout<<"Enter Second Number"<<endl;
	cin>>b;
	
	cout<<"Before Swapping a= "<<a<<" and b= "<<b<<endl;
	
	call_address(&a, &b);
}