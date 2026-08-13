// // Given a stack of size N,implement push and pop operations using the LIFO principle.Handle overflow and underflow conditions,and display the final contents of the stack.
// #include <iostream>
// using namespace std;

// class Stack
// {
//     int arr[100];
//     int top;
//     int size;

// public:

//     Stack(int n)
//     {
//         size = n;
//         top = -1;
//     }

//     void push(int val)
//     {
//         if(top == size - 1)
//         {
//             cout << "Stack Overflow" << endl;
//             return;
//         }

//         top++;
//         arr[top] = val;
//     }

//     void pop()
//     {
//         if(top == -1)
//         {
//             cout << "Stack Underflow" << endl;
//             return;
//         }

//         cout << "Deleted Element = " << arr[top] << endl;
//         top--;
//     }

//     void display()
//     {
//         if(top == -1)
//         {
//             cout << "Stack is Empty" << endl;
//             return;
//         }

//         cout << "Stack Elements : ";

//         for(int i = top; i >= 0; i--)
//         {
//             cout << arr[i] << " ";
//         }

//         cout << endl;
//     }
// };

// int main()
// {
//     int n;

//     cout << "Enter Stack Size : ";
//     cin >> n;

//     Stack s(n);

//     s.push(10);
//     s.push(20);
//     s.push(30);

//     s.display();

//     s.pop();

//     s.display();

//     return 0;
// }


#include <iostream>
using namespace std;
int n=5;
int stack[5];
int top=-1;

bool isEmpty(){
    return top<=-1;
}

bool isFull(){
    return top>=n-1;
}
void push(int ITEM){
    if(isFull()){
        cout<<"Overflow"<<endl;
    }
    else{
        top++;
        stack[top]=ITEM;
    }
}
void pop(){
    if(isEmpty()){
        cout<<"Underflow"<<endl;
    }
    else{
        cout<<"The element is "<<stack[top]<<endl;
        top--;
    }
}
void Traverse(){
    int i;
    if(isEmpty()){
        cout<<"Stack elements are:";
        for(i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
        cout<<"Top element is:"<<stack[top]<<endl;
    }
    else{
        cout<<"Stack is Empty"<<endl;
    }
}
int main(){
    int ch,ITEM;
    cout<<"1) Push"<<endl;
    cout<<"2) Pop"<<endl;
    cout<<"3) Traverse"<<endl;
    cout<<"4) Exit"<<endl;
    
    do{
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"Enter ITEM: "<<endl;
                cin>>ITEM;
                push(ITEM);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                Traverse();
                break;
            }
            case 4:{
                cout<<"Exit"<<endl;
                break;
            }
            default:{
                cout<<"Invalid choice"<<endl;
            }
        }
    }while(ch!=4);
}

#include <iostream>
using namespace std;
class Node{
    int data;
    Node*next;
    
};

