//Copy One Array Element into another array
#include<iostream>
using namespace std;
int main()
{
	int arr1[200], arr2[200],n,i,j;
	
	cout<<"Enter The Size of Array"<<endl;
	cin>>n;
	
	cout<<"1st Array Elements are:"<<endl;
	
	for(i=0; i<n; i++)
	{
		cin>>arr1[i];
	}
	
	cout<<"1st Array is:"<<endl;
	for(i=0; i<n; i++)
	{
		cout<<arr1[i]<<" ";
		arr2[i] = arr1[i];
	}
	cout<<endl<<"After Copying 2nd Array is:"<<endl;
	for(j=0; j<n; j++)
	{
		cout<<arr2[j]<<" ";
	}
}