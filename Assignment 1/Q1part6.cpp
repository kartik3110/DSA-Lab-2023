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
    int start = 0;
    int end = size - 1;
    int temp;
    while (start <= end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end--;
        start++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}