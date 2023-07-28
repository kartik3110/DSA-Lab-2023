#include <iostream>
using namespace std;
int findmax(int *arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void countSort(int *arr, int size, int exp)
{
    int output[size];
    int i, count[10] = {0};

    for (i = 0; i < size; i++)
        count[(arr[i] / exp) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = size - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (i = 0; i < size; i++)
        arr[i] = output[i];
}

void radixSort(int *arr, int size)
{
    int m = findmax(arr, size);

    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, size, exp);
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
    radixSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}