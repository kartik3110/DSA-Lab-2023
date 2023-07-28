#include <iostream>
using namespace std;
int findElement(int *arr, int size, int x)
{
    for (int i = 0; i < size; i++)
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
    int arr[50] = {10, 11, 12, 13, 14, 15};
    int size = 6;
    int x;
    cout << "Enter the element to be found:" << endl;
    cin >> x;
    cout << "index of the number is: " << findElement(arr, size, x);
    return 0;
}