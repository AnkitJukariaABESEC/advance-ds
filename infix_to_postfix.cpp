// 3. *_Problem: Infix to Postfix Conversion_*
// Given an infix expression containing alphabets (operands), operators (+, -, *, /, ^) and parentheses ( and ), write a program to convert the given infix expression into its equivalent postfix expression using a stack.

#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

// Function to convert infix to postfix
string infixToPostfix(string s)
{
    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // Operand
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9'))
        {
            ans += ch;
        }

        // Left Parenthesis
        else if (ch == '(')
        {
            st.push(ch);
        }

        // Right Parenthesis
        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }

            if (!st.empty())
                st.pop();   // Remove '('
        }

        // Operator
        else
        {
            while (!st.empty() &&
                   precedence(st.top()) >= precedence(ch))
            {
                ans += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    // Pop remaining operators
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}