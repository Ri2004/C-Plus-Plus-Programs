#include<iostream>
using namespace std;
int main()
{
    int balance, deposit, withdraw;
    char choice;

    cout << "Enter Balance Amount:" << endl;
    cin >> balance;

    cout << "Enter d for Deposit" << endl
         << "Enter w for withdraw" << endl
         << "Enter b for Balance" << endl;

    cin >> choice;

    switch (choice)
    {
    case 'd':
        cout << "Enter Deposit Amount:" << endl;
        cin >> deposit;

        if (deposit>0)
        {
            cout << "Your Current Balance is: " << balance + deposit;
        }
        break;
    case 'w':
        cout << "Enter Withdrawal Amount:" << endl;
        cin >> withdraw;

        if(withdraw < balance)
        {
            cout << "Your Current Balance is: " << balance - withdraw;
        }
        else
        {
            cout << "Not Possible for Withdraw Amount";
        }
        break;
    case 'b':
        cout << "Your Balance Amount is: " << balance;
        break;
    default:
        cout << "Invalid Input!";
    }
    return 0;
}