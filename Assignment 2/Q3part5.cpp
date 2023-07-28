#include <iostream>
using namespace std;
int main()
{
    int arr[50] = {10, 13, 16, 15, 13, 10};
    int size = 6;
    cout << "elements whose sum is 26 are: "; // let k be 26
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == 26)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    return 0;
}