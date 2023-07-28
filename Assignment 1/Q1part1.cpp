#include <iostream>
using namespace std;
int main()
{
    int first, last;
    int sum = 0;
    cin >> first;
    cin >> last;
    int i = first;
    while (i <= last)
    {
        sum += i;
        i++;
    }
    cout << sum;
    return 0;
}