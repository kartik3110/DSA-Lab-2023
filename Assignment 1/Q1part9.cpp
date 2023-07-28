#include <iostream>
using namespace std;
int main()
{
    int A[10], B[10], n, i, j, k = 0;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        cin >> A[i];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (A[i] == B[j])
                break;
        }
        if (j == k)
        {
            B[k] = A[i];
            k++;
        }
    }
    cout << "elements after deletion : ";
    for (i = 0; i < k; i++)
        cout << B[i] << " ";
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[100];
//     int size;
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//             }
//         }
//     }
//     return 0;
// }