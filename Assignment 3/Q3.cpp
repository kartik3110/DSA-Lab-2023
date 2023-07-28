#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int nCr(int n, int r)
{
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n - r);
    return a / (b * c);
}
int main()
{
    int n, r;
    cout << "enter n: ";
    cin >> n;
    cout << "enter r: ";
    cin >> r;
    cout << "nCr is: ";
    cout << nCr(n, r);
    return 0;
}