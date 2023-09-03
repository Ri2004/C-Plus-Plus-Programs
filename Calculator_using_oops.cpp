// Calculator using oops inheritance
#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int num1, num2;
    int sum, diff, product;
    float div;
public:
    void calculation(int a, int b);
    void get_result(void);
};

void SimpleCalculator :: calculation(int a, int b)
{
    
    num1 = a;
    num2 = a;

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    div = num1 / num2;
}

void SimpleCalculator :: get_result(void)
{
    cout << "The Sum of " << num1 << " and " << num2 << " = " << sum << endl;
    cout << "The Subtraction of " << num1 << " and " << num2 << " = " << diff << endl;
    cout << "The Multiplication of " << num1 << " and " << num2 << " = " << product << endl;
    cout << "The Division of " << num1 << " and " << num2 << " = " << div << endl;
}

class ScientificCalculator
{
protected:
    int num3, num4, power;
    float squareroot, cubicroot, exponent;

public:
    void scientific_calculation(int, int);
    void display_result(void);
};

void ScientificCalculator :: scientific_calculation(int a, int b)
{
    num3 = a;
    num4 = b;

    squareroot = sqrt(num3);
    squareroot = sqrt(num4);
    cubicroot = cbrt(num3);
    cubicroot = cbrt(num4);
    power = pow(num3, num4);
    exponent = exp(num3);
}

void ScientificCalculator :: display_result(void)
{
    cout << "The Squareroot of " << num3 << " is " << squareroot << endl;
    cout << "The Squareroot of " << num4 << " is " << squareroot << endl;
    cout << "The Cuberoot of " << num3 << " is " << cubicroot << endl;
    cout << "The Cuberoot of " << num4 << " is " << cubicroot << endl;
    cout << "The Power of "<<num3<<" to the power of "<<num4<<" is " << power << endl;
    cout << "The Exponent of " << num3 << " is " << exponent << endl;
}

class HybridCalculator: public SimpleCalculator, public ScientificCalculator
{
public:
    void set_data(int a, int b)
    {
        calculation(a, b);
        scientific_calculation(a, b);
    }
    void show(void)
    {
        get_result();
        display_result();
    }

};


int main()
{
    SimpleCalculator c;
    ScientificCalculator d;
    HybridCalculator calc;

    int num1, num2;

    cout << "Enter 1st Number for simple calculator" << endl;
    cin >> num1;

    cout<<"Enter 2nd Number for simple calculator" << endl;
    cin >> num2;

    calc.set_data(num1, num2);
    calc.show();
    return 0;
}