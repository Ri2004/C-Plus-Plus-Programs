//Matrix Addition
#include<iostream>
using namespace std;
int main()
{
	int matrix1[200][200], matrix2[200][200], matrix3[200][200], row, col, i, j;
	
	cout<<"Enter The Row Number of Matrix"<<endl;
	cin>>row;
	
	cout<<"Enter The Column Number of Matrix"<<endl;
	cin>>col;
	
	
	cout<<"The 1st Matrix Elements are:"<<endl;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cin>>matrix1[i][j];
		}
	}
	cout<<"The 2nd Matrix Elements are:"<<endl;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cin>>matrix2[i][j];
		}
	}
	
	cout<<"The 1st Matrix is:"<<endl;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cout<<matrix1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"The 2nd Matrix is:"<<endl;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cout<<matrix2[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Sum of 1st and 2nd Matrix is:"<<endl;
	for(i=0; i<row; i++)
	{
		for (j = 0; j < col; j++)
		{
			matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			cout<<matrix3[i][j]<<"\t";
		}
		cout<<endl;
	}
	}