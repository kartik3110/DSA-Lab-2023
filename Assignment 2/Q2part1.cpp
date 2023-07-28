#include <iostream>
using namespace std;
bool isSorted(int *arr, int size)
{
    bool ans = true;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            ans = false;
        }
    }
    return ans;
}
int main()
{
    int arr[50] = {2, 3, 5, 7, 2, 5};
    if (isSorted(arr, 6))
    {
        cout << "Sorted" << endl;
    }
    else
        cout << "Not sorted";
    return 0;
}