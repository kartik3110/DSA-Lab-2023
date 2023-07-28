#include <iostream>
using namespace std;
int main()
{
    int arr[50] = {10, 13, 13, 15, 17, 17};
    int size = 6;
    cout << "duplicate element is: ";
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}