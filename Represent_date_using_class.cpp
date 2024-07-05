#include<iostream>
using namespace std;

class Date
{
    int date, month, year;

    protected:
        int getMonth(int);

public:
    void setdate(int, int, int);
    void displaydate(int);
};

int Date::getMonth(int format)
{
    switch (format)
    {
        case 3:
            return 3;

        case 4:
            return 4;

        case 5:
            return 5;

        case 6:
            return 6;

        case 7:
            return 7;

        case 8:
            return 8;

        case 9:
            return 9;

        case 10:
            return 10;

        case 11:
            return 11;

        case 12:
            return 12;

        default:
            return -1;
    }
}

void Date::setdate(int d, int m, int y)
{
    date = d;
    month = m;
    year = y;
}

void Date::displaydate(int format)
{
    if (format == 1)
        cout << "The Date is: " << date << "/" << month << "/" << year << endl;
    else if(format == 2)
        cout << "The Date is: " << date << "-" << month << "-" << year << endl;
    else
        cout << "The Date is: " << date << "-" << getMonth(format) << "-" << year << endl;
}
int main()
{
    Date d1;
    int date, month, year, format;
    cout << "Enter Date, Month and Year" << endl;
    cin >> date >> month >> year;

    cout << "Enter Format in which you want to see date" << endl;
    cin >> format;

    d1.setdate(date, month, year);
    d1.displaydate(format);
    return 0;
}