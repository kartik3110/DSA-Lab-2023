#include <iostream>
using namespace std;
void selectionSort(int *arr, int size)
{
    for (int j = 0; j < size; j++)
    {
        int min = arr[j], minIndex = j;

        for (int i = j + 1; i < size; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                minIndex = i;
            }
        }
        // swap
        int temp = arr[j];
        arr[j] = min;
        arr[minIndex] = temp;
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
    selectionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}