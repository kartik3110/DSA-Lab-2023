#include <iostream>
using namespace std;
void insertionSort(int *arr, int size)
{
    int i, j;
    for (i = 1; i < size; i++)
    {
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = temp; // j will be -1 when the loop stops
    }
}
int main()
{
    int size;
    cout << "enter size of array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}