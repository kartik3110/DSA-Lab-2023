#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int size;
    cout << "enter size: ";
    cin >> size;
    cout << "enter elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "sum is: " << sum;
    return 0;
}