//Calculate all using Pointers
#include<iostream>
using namespace std;

int main()
{
	int a, b, sum=0, sub=0, mul=0, div=0;
	int *p, *q, *r, *s, *m, *d;
	
	cout<<"Enter First Number"<<endl;
	cin>>a;
	
	cout<<"Enter Second Number"<<endl;
	cin>>b;
	
	p = &a;
	q = &b;
	r = &sum;
	s = &sub;
	m = &mul;
	d = &div;
	
	*r = *p + *q;
	*s = *p - *q;
	*m = *p * *q;
	*d = *p / *q;
	
	cout<<"Sum of "<<a<<" and "<<b<<" is: "<<*r<<endl;
	cout<<"Subtraction of "<<a<<" and "<<b<<" is: "<<*s<<endl;
	cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<*m<<endl;
	cout<<"Division of "<<a<<" and "<<b<<" is: "<<*d<<endl;
}