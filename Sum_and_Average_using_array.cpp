//Sum and Average of Numbers using arrays
#include<iostream>
using namespace std;
int main()
{
	int arr[200],sum=0,n,k;
	float avg;
	cout<<"Enter The Size of Array"<<endl;
	cin>>n;
	
	cout<<"Enter Marks"<<endl;
	for(k=0; k<n; k++)
	{
		cin>>arr[k];
		sum = sum +arr[k];
		avg = (sum)/n;
	}
	cout<<"The Sum is:"<<sum<<endl;
	cout<<"The Average is:"<<avg;
}