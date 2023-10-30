#include<iostream>
#define PI 3.14
using namespace std;
class Circle
{
    float radius;
    public:
        void setradius(float r)
        {
            radius = r;
        }
        void getradius()
        {
            cout << "The radius of circle is " << radius << endl;
        }
        float calculateArea();
        float circumference();
};

float Circle::calculateArea()
{
    float area;
    area = (PI * radius * radius);
    return area;
}

float Circle::circumference()
{
    float circums;
    circums = 2 * PI * radius;
    return circums;
}

int main()
{
    Circle c1;
    float radi, area, circums;

    cout << "Enter Radius of circle" << endl;
    cin >> radi;

    c1.setradius(radi);
    c1.getradius();
    area = c1.calculateArea();
    circums = c1.circumference();

    cout << "The Area of Circle is: " << area << " and Circumference is: " << circums << endl;
    return 0;
}