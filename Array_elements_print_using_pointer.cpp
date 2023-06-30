//Array elements print using pointer
#include<iostream>
using namespace std;
int main()
{
	int arr[50],n,i=0;
	int *ptr;
	
	cout<<"Enter the Size of Array"<<endl;
	cin>>n;
	
	ptr = arr;
	
	cout<<"Enter Array Elements"<<endl;
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	
	cout<<"Array Elements are print by pointer"<<endl;
	i=0;
	while(i<n)
	{
		cout<<*(ptr+i)<<endl;
		i++;
	}	
}