#include<iostream>
using namespace std;

class Time
{
    int hour, minute, second;
    public:
        void setTime(int, int, int);
        void displayTime();
};

void Time::setTime(int n1, int n2, int n3)
{
    hour = n1;
    minute = n2;
    second = n3;
}

void Time::displayTime()
{
    cout << "The Time is " <<hour<<" hr "<<minute<<" min "<<second<<" sec "<<endl ;
}

int main()
{
    Time t;
    int x, y, z;
    cout << "Enter Hour, Minute and Second" << endl;
    cin >> x >> y >> z;

    t.setTime(x, y, z);
    t.displayTime();
    return 0;
}