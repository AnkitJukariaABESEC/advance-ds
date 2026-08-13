_*Stack Implementation using Linked List*_ 
Problem: Stack Using Linked List

Implement a Stack using a Linked List.
Write the following functions:
push(int data): Insert an element into the stack and return the inserted value.
pop(): Remove and return the top element of the stack. If the stack is empty, return -1.

Implement the stack using a singly linked list.

#include <bits/stdc++.h>
using namespace std;
// Structure of Node
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Stack Class
class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    // Push Operation
    int push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
        return data;
    }

    // Pop Operation
    int pop()
    {
        if (top == NULL)
            return -1;

        int x = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        return x;
    }
};

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Stack st;
        int q;
        cin >> q;
        while (q--)
        {
            int type;
            cin >> type;
            if (type == 1)
            {
                int x;
                cin >> x;
                st.push(x);
            }
            else if (type == 2)
            {
                cout << st.pop() << " ";
            }
        }

        cout << endl;
    }}