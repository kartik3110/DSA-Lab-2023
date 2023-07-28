#include <iostream>
using namespace std;
int partition(int *input, int s, int e)
{
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (input[i] <= input[s])
        {
            count++;
        }
    }
    int pi = count + s;
    // swapping
    int temp = input[pi];
    input[pi] = input[s];
    input[s] = temp;

    int i = s;
    int j = e;

    while (i < pi && j > pi)
    {
        if (input[i] >= input[pi])
        {
            if (input[j] < input[pi])
            {
                // swap
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
    }
    return pi;
}
void myQuickSort(int *input, int s, int e) // recursive
{
    if (s >= e) // base case
    {
        return;
    }
    int pivotIndex = partition(input, s, e);
    myQuickSort(input, s, pivotIndex - 1);
    myQuickSort(input, pivotIndex + 1, e);
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
    myQuickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}