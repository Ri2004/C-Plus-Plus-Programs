//Print Minimum Number
#include<iostream>
using namespace std;

int main()
{
	int arr[60],n,min,i,j;
	cout<<"Enter The Size Of Array"<<endl;
	cin>>n;
	
	cout<<"Enter "<<n<<" Elements of array"<<endl;
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	min = arr[0];
	for(j=1; j<n; j++)
	{
		if(min>arr[j])
		{
			min = arr[j];
		}
	}
	cout<<"Minimum Value is: "<<min;
}