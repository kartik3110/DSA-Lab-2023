#include <iostream>
#include <climits>
using namespace std;
int findMax(int *arr, int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    // take input
    int size, w;
    cout << "enter size of array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "enter the elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter width of sliding window: ";
    cin >> w;
    // make B array
    int *b = new int[size - w + 1];
    for (int i = 0; i < size - w + 1; i++)
    {
        b[i] = findMax(arr + i, w);
    }

    cout << "array B is: " << endl;
    for (int i = 0; i < size - w + 1; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}