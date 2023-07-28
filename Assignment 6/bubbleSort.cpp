#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j]; // swap
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}