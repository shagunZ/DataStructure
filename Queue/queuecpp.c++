#include<iostream>
using namespace std;
 

class Queue{
    private:
    int size; 
    int front ; 
    int rear; 
    int *Q;
    public:
    Queue(){front=rear=-1;size=10;Q=new int[size];}
    Queue(int size){ front = rear = -1;  this->size = size;  Q=new int[this->size];}
    void enqueue(int x);
    int dequeue();
    void Display();
};


void Queue:: enqueue(int x){
if(rear == size-1)cout<<"queue is full";
else{
   rear++;
    Q[rear]=x;
}
}

int Queue:: dequeue(){
    int x = -1; 
    if(front ==rear)cout<<"queue is empty";
    else{
        // front++;
        // x=Q[front];
//ek hi baat hai
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

int main(){
Queue q(5); 

q.enqueue(121);
q.enqueue(122);
q.enqueue(123);
q.enqueue(124);
q.Display();

cout<<"dequeue"<<q.dequeue()<<endl;
q.Display();
return 0;
}