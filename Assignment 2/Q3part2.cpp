#include <iostream>
using namespace std;
int allIndices(int *arr, int size, int x, int *output)
{
    if (size == 0)
    {
        return 0;
    }
    int smallSize = allIndices(arr, size - 1, x, output);
    if (arr[size - 1] == x)
    {
        output[smallSize] = size - 1;
        return smallSize + 1;
    }
    else
        return smallSize;
}
int main()
{
    int arr[50] = {10, 13, 12, 13, 14, 10};
    int size = 6;
    int x;
    cout << "Enter the element to be found:" << endl;
    cin >> x;
    // make aoutput array to store all indexes of occurence
    int *output = new int[size];
    int outputSize = allIndices(arr, size, x, output);
    cout << "the indices of element are:" << endl;
    for (int i = 0; i < outputSize; i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}