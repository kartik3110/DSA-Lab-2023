#include <iostream>
using namespace std;
int main()
{
    int arr[50] = {10, 13, 16, 15, 13, 10};
    int size = 6;
    cout << "duplicate elements are: ";
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
            }
        }
    }
    return 0;
}