#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[50] = {10, 12, 14, 15, 16, 18};
    int size = 6;
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "min is: " << min << endl;
    cout << "max is: " << max;

    return 0;
}