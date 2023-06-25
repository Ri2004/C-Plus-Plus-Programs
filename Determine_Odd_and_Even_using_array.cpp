//Determine Odd & even through array
#include<iostream>
using namespace std;
int main()
{
	int arr[50],n,i,j,k;
	cout<<"Enter The Size of array"<<endl;
	cin>>n;
	
	cout<<"Enter The elements one by one"<<endl;
	for(k=0; k<n; k++)
	{
		cin>>arr[k];
	}
	
	cout<<endl<<"Even Numbers are:"<<endl;
	for(i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<endl;
		}
	}
	cout<<endl<<"Odd Numbers are:"<<endl;
	for(int j=0; j<n; j++)
	{
		if(arr[j]%2!=0)
		{
			cout<<arr[j]<<endl;
		}
	}
}