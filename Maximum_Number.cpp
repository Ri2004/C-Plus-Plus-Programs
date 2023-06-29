//Print Maximum Number
#include<iostream>
using namespace std;

int main()
{
	int arr[60],n,max,i,j;
	cout<<"Enter The Size Of Array"<<endl;
	cin>>n;
	
	cout<<"Enter "<<n<<" Elements of array"<<endl;
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	max = arr[0];
	for(j=1; j<n; j++)
	{
		if(max<arr[j])
		{
			max = arr[j];
		}
	}
	cout<<"Maximum Value is: "<<max;
}