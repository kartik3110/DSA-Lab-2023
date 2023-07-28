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
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    cout << "max is: " << max;
    return 0;
}