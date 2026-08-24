#include <iostream>
#define SIZE 10
using namespace std;
 class Queue{
    public:
    int data[SIZE];
    int front,rear;

    void initialize(){
        front=rear=-1;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return rear=SIZE-1;
    }
    void enqueue(int info){
        if(rear==SIZE-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front==-1)
        front=front+1;
    rear=rear+1;
    data[rear]=info;
    }
    int dequeue(){
        int item;
        if(front==-1){
            cout<<endl<<"Queue is empty"<<endl;
            return -1;
        }
        item=data[front];
        if(front==rear)
        front=rear=-1;
        else
        front=front+1;
    return item;
    }
    void traverse(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front;i<=rear;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
 };

 int main(){
    Queue Q;
    Q.initialize();
    int ch,info;
    do{
         cout<<"\n1> Enqueue"
         <<"\n2> Dequeue"
         <<"\n3> Traverse"
         <<"\n4> IsEmpty"
         <<"\n5> IsFull"
         <<"\n6> Exit"
         <<"\nEnter you choice:";

        cin>>ch;
         
        switch(ch){
            case 1:
            cout<<"Enter info:";
            cin>>info;

            Q.enqueue(info);
            cout<<"Front = "<<Q.front
            <<", Rear = "<<Q.rear<<endl;
            break;

            case 2:
            info=Q.dequeue();
            if(info!=-1){
                cout<<"Removed Element: "<<info<<endl;
            }
            cout<<"Front = "<<Q.front
            <<", Rear = "<<Q.rear<<endl;
            break;

            case 3:
            Q.traverse();
            cout<<"Front = "<<Q.front
              <<", Rear = "<<Q.rear<<endl;
              break;
            case 4:
            cout<<"The queue is "
            <<(Q.isEmpty()? "Empty": "Not Empty")<<endl;
            break;

            case 5:
            cout<<"The queue is "
            <<(Q.isFull()? "Full": "Not Full")<<endl;
            break;
            case 6:
            cout<<endl
            <<"This code is executed by Mr.XYZ with Roll No XXXXXX"<<endl;
            break;
            deafult:
            cout<<"Invalid Choice! Try again"<<endl;
        }
    }while(ch!=6);
    return 0;
 }



// Queue using Linked List
#include <iostream>
using namespace std;

class Node {
public:
    int info;
    Node* next;

    Node(int val) {
        info = val;
        next = nullptr;
    }
};

Node* front;
Node* rear;

bool isEmpty() {
    return front == NULL;
}

void traverse() {
    if (front == NULL) {
        cout << "Queue is empty." << endl;
        return;
    }

    Node* temp = front;

    while (temp != NULL) {
        cout << temp->info << " ";
        temp = temp->next;
    }

    cout << endl;
    cout << "Front: " << front->info
         << " Rear: " << rear->info << endl;
}

void enqueue(int val) {
    Node* newNode = new Node(val);

    if (front == NULL) {
        front = newNode;
        rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty." << endl;
        return;
    }

    Node* temp = front;
    front = front->next;
    delete temp;

    // Important: if the queue becomes empty
    if (front == NULL) {
        rear = NULL;
    }
}

int main() {
    front = rear = NULL;

    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    }

    enqueue(10);
    enqueue(20);

    cout << "Queue elements: ";
    traverse();

    cout << "Dequeue:" << endl;
    dequeue();

    cout << "Queue after dequeue: ";
    traverse();

    return 0;
}

//  implement palindrom using stack 