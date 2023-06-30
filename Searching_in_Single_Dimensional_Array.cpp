//Searching in Single Dimensional Array
#include<iostream>
using namespace std;
int main()
{
	int arr[50], n,r,i,j;

	cout<<"Enter Size Of Array"<<endl;
	cin>>n;
	
	cout<<"Array Elements Are:"<<endl;
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter Your Number"<<endl;
	cin>>r;
	
	for(j=0; j<n; j++)
	{
		if(r == arr[j])
		{
			cout<<"Your Entered Number is found in "<<j+1<<" position ";
		} 
	}
}
