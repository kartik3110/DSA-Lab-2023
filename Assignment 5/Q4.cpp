#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isBalanced(string expression)
{
    // Write your code here
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        if (expression[i] == '(')
        {
            s.push(expression[i]);
        }
        else if (expression[i] == ')' && !s.empty())
            s.pop();
        else if (expression[i] == ')' && s.empty())
            return false;
    }
    if (s.empty())
        return true;
    else
        return false;
}
int main()
{
    string input;
    cout << "enter string: ";
    cin >> input;
    cout << ((isBalanced(input)) ? "parenthesis are balanced." : "parenenthesis unbalanced.");
    return 0;
}