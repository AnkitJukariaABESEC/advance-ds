#include <iostream>
#include <stack>
using namespace std;

class Stack{
    int size;
    int arr[size];
    int top;

public:
Stack(int n){
size=n;
top=-1;
}
void insert(int val){
    if(top==size-1){
    cout<<"Overflow"<<endl;
    return;
    }
    top++;
    arr[top]=val;
}
void undo(){
    if(top==-1){
    cout<<"Stack is Empty"<<endl;
    return;
    }
    top--;
}
void history(){
if(top == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }

        cout << "History is: ";

        for(int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }

        // cout << endl;
}
void next_undo(){
     if(top==-1){
    cout<<"Stack is Empty"<<endl;
    return;
    }
    cout<<"The next element to be undone is:"<<arr[top]<<endl;
    
}
};