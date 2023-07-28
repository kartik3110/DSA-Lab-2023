#include <iostream>
using namespace std;

int main()
{
    int rows, columns, a[100][100], b[100][100], sum[100][100], i, j;
    cout << "Enter number of rows ";
    cin >> rows;
    cout << "Enter number of columns";
    cin >> columns;
    cout << endl
         << "Enter elements of 1st matrix: " << endl;
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < columns; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }
    cout << endl
         << "Enter elements of 2nd matrix: " << endl;
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < columns; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }

    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < columns; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << endl
         << "Sum of two matrix is: " << endl;
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < columns; ++j)
        {
            cout << sum[i][j] << "  ";
            if (j == columns - 1)
                cout << endl;
        }
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr1[100][100];
//     int arr2[100][100];
//     int m1, n1;
//     cin >> m1;
//     cin >> n1;
//     for (int i = 0; i < m1; i++)
//     {
//         for (int j = 0; j < n1; j++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     int m2, n2;
//     cin >> m2;
//     cin >> n2;
//     for (int i = 0; i < m2; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin >> arr2[i][j];
//         }
//     }
//     int x = min(m1, m2);
//     int y = min(n1, n2);
//     // for subtracting
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < y; j++)
//         {
//             arr1[i][j] -= arr2[i][j];
//         }
//     }
//     for (int i = 0; i < m1; i++)
//     {
//         for (int j = 0; j < n1; j++)
//         {
//             cout << arr1[i][j] << " ";
//         }
//         cout << endl;
//     }
//     // for adding
//     //  for (int i = 0; i < x; i++)
//     //  {
//     //      for (int j = 0; j < y; j++)
//     //      {
//     //          arr1[i][j] + arr2[i][j];
//     //      }
//     //  }
//     return 0;
// }