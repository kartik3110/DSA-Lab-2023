#include <iostream>
using namespace std;
int linearSearch(int *arr, int size, int x)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100];
    int size;
    cout << "enter size: ";
    cin >> size;
    cout << "enter elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int x, i;
    cout << "enter element to be found: ";
    cin >> x;

    cout << "index of the element is: " << linearSearch(arr, size, x);
    return 0;
}