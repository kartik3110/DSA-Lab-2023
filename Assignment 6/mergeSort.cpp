#include <iostream>
using namespace std;
void merger(int *input, int si, int mid, int ei)
{
    int finalSize = ei - si + 1;
    int output[ei - si + 1];
    int count = 0;
    int i = si, j = mid + 1;
    while (i <= mid && j <= ei)
    {
        if (input[i] <= input[j])
        {
            output[count] = input[i];
            i++;
            count++;
        }
        else
        {
            output[count] = input[j];
            j++;
            count++;
        }
    }
    while (j <= ei)
    {
        output[count] = input[j];
        j++;
        count++;
    }
    while (i <= mid)
    {
        output[count] = input[i];
        i++;
        count++;
    }

    for (int k = 0; k < finalSize; k++)
    {
        input[k] = output[k];
    }
}
void myMergeSort(int *input, int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = (si + ei) / 2;
    myMergeSort(input, si, mid);
    myMergeSort(input, mid + 1, ei);
    merger(input, si, mid, ei);
}
void mergeSort(int *input, int size)
{
    int si = 0;
    int ei = size - 1;
    myMergeSort(input, si, ei);
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
    mergeSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}