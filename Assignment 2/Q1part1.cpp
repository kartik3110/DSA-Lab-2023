#include <iostream>
#include <climits>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void append(int *arr, int &size, int x)
{
    size++;
    arr[size - 1] = x;
    display(arr, size);
}
void insert(int *arr, int &size, int x, int index)
{
    size++;
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = x;
    display(arr, size);
}
void deleter(int *arr, int &size, int index)
{
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    display(arr, size);
}
int linearSearch(int *arr, int &size, int x)
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
void sort(int *arr, int size)
{
    for (int j = 0; j < size; j++)
    {
        for (int i = j; i < size; i++)
        {
            if (arr[i] >= arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
int binarySearch(int *arr, int &size, int x)
{
    sort(arr, size);
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (x == arr[mid])
            return mid;

        else if (x > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}
void set(int *arr, int x, int index)
{
    arr[index] = x;
}
int get(int *arr, int index)
{
    return arr[index];
}
int myMax(int *arr, int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    return max;
}
int myMin(int *arr, int size)
{
    int min = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }
    return min;
}
void rotate(int *arr, int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
void reverse(int *arr, int size)
{
    int s = 0, e = size - 1;
    while (s <= e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = arr[s];
        s++;
        e--;
    }
}
void shift(int *arr, int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
int main()
{
    int choice, size;
    int arr[100];
    cout << "enter choice: ";
    cin >> choice;
    cout << "enter size of array: ";
    cin >> size;
    cout << "enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    switch (choice)
    {
    case 1:
        display(arr, size);
        break;
    case 2:
        int x;
        cout << "enter extra element: ";
        cin >> x;
        append(arr, size, x);
        break;
    case 3:
        int index;
        cout << "enter extra element: ";
        cin >> x;
        cout << "enter index: ";
        cin >> index;
        insert(arr, size, x, index);
        break;
    case 4:
        cout << "enter index of element to be deleted: ";
        cin >> index;
        deleter(arr, size, index);
        break;
    case 5:
        cout << "enter element to be found: ";
        cin >> x;
        cout << linearSearch(arr, size, x);
        break;
    case 6:
        cout << "enter element to be found: ";
        cin >> x;
        cout << binarySearch(arr, size, x);
        break;
    case 7:
        cout << "enter index to get: " << endl;
        cin >> x;
        cout << get(arr, x);
        break;
    case 8:
        cout << "enter element to be set: ";
        cin >> x;
        cout << "enter index";
        cin >> index;
        set(arr, x, index);
        break;
    case 9:
        cout << "max element is:" << endl;
        cout << myMax(arr, size);
        break;
    case 10:
        cout << "min element is:" << endl;
        cout << myMin(arr, size);
        break;
    case 11:
        cout << "reversed array is: " << endl;
        reverse(arr, size);
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        break;
    case 12:
        cout << "shifted array is: " << endl;
        shift(arr, size);
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        break;
    case 13:
        cout << "rotated array is: " << endl;
        rotate(arr, size);
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        break;

    default:
        break;
    }
    return 0;
}