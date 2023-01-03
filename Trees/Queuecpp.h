#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
 
class Node{
    public:
    Node *lchild; 
    int data; 
    Node *rchild;
};

class Queue{
    private:
    int size; 
    int front ; 
    int rear; 
    Node **Q;
    public:
    Queue(){front=rear=-1;size=10;Q=new Node*[size];}
    Queue(int size){ front = rear = -1;  this->size = size;  Q= new Node*[this->size];}
    void enqueue(Node *x);
    Node* dequeue();
    int isEmpty(){return front==rear; };
    void Display();
};


void Queue:: enqueue(Node *x){
if(rear == size-1)cout<<"queue is full";
else{
   rear++;
    Q[rear]=x;
}
}

Node* Queue:: dequeue(){
    Node* x = NULL; 
    if(front ==rear)cout<<"queue is empty";
    else{
        x=Q[front+1];
        front++;
    }
    return x; 
}

void Queue:: Display(){
    for(int i=front+1;i<=rear;i++){
        cout<<Q[i]<<" ";
    }
    cout<<endl;
}
