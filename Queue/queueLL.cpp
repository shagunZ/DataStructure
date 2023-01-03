#include<iostream>
#include<stdlib.h>
using namespace std;
 
struct Node {
    int data ; 
    struct Node *next; 
}*front =NULL, *rear = NULL;

void enqueue(int x){
    struct Node *t; 
    t = new Node; 
    if(t==NULL)
        cout<<"Full";
    else{
        t->data = x; 
        t->next = NULL; 
        if(front==NULL)
            front = rear = t; 
        else{
            rear->next = t; 
            rear = t; 
        }
    }
}

int dequeue(){
    int x = -1; 
    struct Node *t; 
    if(front==NULL)cout<<"Empty";
    else{
        x=front->data; 
        t = front;
        front = front->next;  
        free(t);
    }
    return x; 
}

void Display(){
    struct Node *p=front; 
    while(p){
        cout<<p->data<<" ";
        p=p->next; 
    }
    cout<<endl;
}

int main(){

enqueue(22);
enqueue(32);
enqueue(42);
enqueue(52);
Display();
cout<<"dequeue"<<dequeue();
cout<<endl; 
Display();


return 0;
}