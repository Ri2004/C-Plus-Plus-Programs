#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int start, end, length = 0, rem, digit = 0,i,temp;

    cout << "Enter Lower Limit:" << endl;
    cin >> start;

    cout << "Enter Upper Limit:" << endl;
    cin >> end;

    if(start<end)
    {
        cout << "Armstrong Numbers Between " << start << " and " << end << " are: " << endl;
        for (i = start; i <= end; i++)
        {
            temp = i;
            length = 0;
            digit = 0;
            while(temp>0)
            {
                length++;
                temp /= 10;
            }
            temp = i;
            while(temp>0)
            {
                rem = temp % 10;
                digit = digit + pow(rem, length);
                temp /= 10;
            }
            if(digit == i)
            {
                cout << digit << " , ";
            }

        }
    }

    else if(start>end)
    {
        cout << "Armstrong Numbers Between " << start << " and " << end << " are: " << endl;
        for (i = start; i >= end; i--)
        {
            temp = i;
            length = 0;
            digit = 0;
            while(temp>0)
            {
                length++;
                temp /= 10;
            }
            temp = i;
            while(temp>0)
            {
                rem = temp % 10;
                digit = digit + pow(rem, length);
                temp /= 10;
            }
            if(digit == i)
            {
                cout << digit << " , ";
            }

        }
    }

    return 0;
}