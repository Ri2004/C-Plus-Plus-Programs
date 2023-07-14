#include<iostream>
using namespace std;

int celsius_to_fahrenheit(float celsius)
{
    float farh;
    farh = ((celsius * 9) / 5) + 32;
    return farh;
}
int main()
{
    float temparature, fahrenheit;
    cout << "Enter Temparature in Celsius:" << endl;
    cin >> temparature;

    if(temparature<=100.00)
    {
        fahrenheit = celsius_to_fahrenheit(temparature);
        cout << "Fahrenheit Temparature of Celsius temparature is: " << fahrenheit;
    }
    else
    {
        cout << "You are not Entering Celsius Temparature";
    }
    return 0;
}