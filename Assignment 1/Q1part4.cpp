#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 2)
    {
        cout << "number is prime";
    }
    else
    {
        cout << "number is not prime";
    }
    return 0;
}
