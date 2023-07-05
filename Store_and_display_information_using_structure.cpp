//Store and display information using structure
#include<iostream>
using namespace std;
struct student
{
	int roll_no;
	char name[30];
	int marks;
};
int main()
{
	struct student s1;
	struct student s2;
	struct student s3;
	
	cout<<"Enter Information for student 1"<<endl;
	cin>>s1.roll_no;
	cin>>s1.name;
	cin>>s1.marks;
	
	cout<<"Enter Information for student 2"<<endl;
	cin>>s2.roll_no;
	cin>>s2.name;
	cin>>s2.marks;
	
	cout<<"Enter Information for student 3"<<endl;
	cin>>s3.roll_no;
	cin>>s3.name;
	cin>>s3.marks;
	
	cout<<"Information about 1st student"<<endl;
	cout<<s1.roll_no<<" "<<s1.name<<" "<<s1.marks<<endl;
	
	cout<<"Information about 2nd student"<<endl;
	cout<<s2.roll_no<<" "<<s2.name<<" "<<s2.marks<<endl;
	
	cout<<"Information about 3rd student"<<endl;
	cout<<s3.roll_no<<" "<<s3.name<<" "<<s3.marks<<endl;
}