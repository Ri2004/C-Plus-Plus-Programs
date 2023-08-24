#include<iostream>
using namespace std;

int search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target)
            return i;
    }
    return -1;
}
int main()
{
    int arr[200], n, target, i, result;

    cout << "Enter Size of Array" << endl;
    cin >> n;

    cout << "Enter Array Elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter Target Value" << endl;
    cin >> target;

    result = search(arr, n, target);
    cout << result;
    return 0;
}