#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char symbol)
{
    if (symbol == '^')
        return 3;
    else if (symbol == '/' || symbol == '*')
        return 2;
    else if (symbol == '+' || symbol == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string s)
{

    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;

        else if (c == '(')
            st.push('(');

        else if (c == ')')
        {
            while (st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        else
        {
            while (!st.empty() && precedence(s[i]) <= precedence(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    return result;
}

int main()
{
    string exp = "a+b*(c^d-e)^(f/q)-i";
    cout << "infix: " << exp << endl;
    cout << "postfix: " << infixToPostfix(exp);

    return 0;
}
