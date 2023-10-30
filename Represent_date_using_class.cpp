#include<iostream>
using namespace std;

class Date
{
    int date, month, year;
    public:
        void setdate(int, int, int);
        void displaydate();
};

void Date::setdate(int d, int m, int y)
{
    date = d;
    month = m;
    year = y;
}

void Date::displaydate()
{
    cout << "The Date is: d=" << date << " m=" << month << " y=" << year << endl;
}
int main()
{
    Date d1;
    int date, month, year;
    cout << "Enter Date, Month and Year" << endl;
    cin >> date >> month >> year;

    d1.setdate(date, month, year);
    d1.displaydate();
    return 0;
}