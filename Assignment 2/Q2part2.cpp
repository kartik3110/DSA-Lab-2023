#include <iostream>
using namespace std;

int main()
{
    int size1 = 4, size2 = 3;
    int arr1[50];
    int arr2[50];
    cout << "enter elements of first array: " << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter elements of second array: " << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    int *output = new int[size1 + size2];
    for (int i = 0; i < size1; i++)
    {
        output[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        output[i + size1] = arr2[i];
    }
    cout << "merged array: " << endl;
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}