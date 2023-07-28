#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}