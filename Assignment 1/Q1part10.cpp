#include <iostream>
using namespace std;
int main()
{ // input
    int size1;
    int size2;
    cout << "enter size of first array: ";
    cin >> size1;
    int *input1 = new int[size1];
    cout << "enter elements of first array: ";
    for (int i = 0; i < size1; i++)
    {
        cin >> input1[i];
    }

    cout << "enter size of second array: ";
    cin >> size2;
    int *input2 = new int[size2];
    cout << "enter elements of second array: ";
    for (int i = 0; i < size2; i++)
    {
        cin >> input2[i];
    }
    // copying into third array
    int *output = new int[size1 + size2];
    int count = 0;
    for (int i = 0; i < size1; i++, count++)
    {
        output[count] = input1[i];
    }
    for (int i = 0; i < size2; i++, count++)
    {
        output[count] = input2[i];
    }

    for (int i = 0; i < size1 + size2; i++)
    {
        cout << output[i] << " ";
    }
    delete[] input1;
    delete[] input2;
    delete[] output;
    return 0;
}