#include <iostream>
using namespace std;
int main()
{
    int arr[50] = {10, 12, 14, 15, 16, 18};
    int size = 6, k;
    cout << "enter k: ";
    cin >> k;
    cout << "elements whose sum is k are: " << endl;
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        if (arr[s] + arr[e] == k)
        {
            cout << arr[s] << " " << arr[e] << endl;
            s++;
            e--;
        }
        else if (arr[s] + arr[e] >= k)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    return 0;
}