#include <iostream>
using namespace std;
int main()
{
    int goal;
    cin >> goal;
    int sum = 0;
    int i = 1;
    while (sum < goal)
    {
        sum += i;
        i++;
    }
    cout << --i;

    return 0;
}