#include <iostream>
using namespace std;
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
    for (i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    cout << "index of the element is: " << i;
    return 0;
}