#include<iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int x, int y, int z);
    void getdata()
    {
        cout << "The value of a is " <<a<<endl;
        cout << "The value of b is " <<b<<endl;
        cout << "The value of c is " <<c<<endl;
        cout << "The value of d is " <<d<<endl;
        cout << "The value of e is " <<e<<endl;

    }
};

void Employee :: setdata(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}


int main()
{
    Employee obj;

    obj.d = 65;
    obj.e = 100;
    obj.setdata(56, 45, 85);
    obj.getdata();
    
    return 0;
}