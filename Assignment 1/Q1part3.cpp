#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int i = 1;
    int gcd;
    while (i <= n && i <= m)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }
        i++;
    }
    cout << gcd;

    return 0;
}