//Matrix Transpose
#include<iostream>
using namespace std;
#define N 50
int main()
{
	int matrix[N][N],row,col,i,j;
	cout<<"Enter The Row Of Matrix"<<endl;
	cin>>row;
	
	cout<<"Enter The Column Of Matrix"<<endl;
	cin>>col;
	
	cout<<"The Matrix Elements are:"<<endl;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<"The Matrix is:"<<endl;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cout<<matrix[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<"The Transpose Of Matrix is:"<<endl;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cout<<matrix[j][i];
			cout<<"\t";
		}
		cout<<endl;
	}
}