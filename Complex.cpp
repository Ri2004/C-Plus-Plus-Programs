#include<iostream>
using namespace std;

class Complex
{
    int real, imag;

    public:
        void setdata(int, int);
        void getdata();
};

void Complex::setdata(int x, int y)
{
    real = x;
    imag = y;
}

void Complex::getdata()
{
    cout <<"Complex Number is: "<<real<<" + "<<imag<<"i"<< endl;
}

int main()
{
    Complex c1;
    int n1, n2;

    cout << "Enter Real and Imaginary Part" << endl;
    cin >> n1 >> n2;

    c1.setdata(n1, n2);
    c1.getdata();
    return 0;
}