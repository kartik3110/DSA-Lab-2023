#include <iostream>
using namespace std;
int main()
{
    int size1 = 5;
    int size2 = 4;
    int arr1[50] = {1, 2, 3, 4, 5};
    int arr2[50] = {2, 4, 7, 8};
    cout << "intersection is:" << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }

    cout << endl
         << "union is:" << endl;
    int smallSize = min(size1, size2);
    int bigSize = max(size1, size2);
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }
    int j = 0;
    for (int i = 0; i < size2; i++)
    {
        bool isUnique = true;
        for (j = 0; j < size1; j++)
        {
            if (arr1[j] == arr2[i])
            {
                isUnique = false;
            }
        }
        if (isUnique)
        {
            cout << arr2[i] << " ";
        }
    }

    return 0;
}