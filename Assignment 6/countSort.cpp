#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

void countSort(int *arr, int size)
{
    int *output = new int[size];
    int *count = new int[size];
    int max = arr[0];

    // find max from arr
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    for (int i = 0; i <= max; ++i)
    {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = output[i];
    }
    delete[] output;
    delete[] count;
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
    countSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}