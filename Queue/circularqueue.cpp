#include <stdio.h>
#include <stdlib.h>
struct Queue
{
 int size;
 int front;
 int rear;
 int *Q;
};
void create(struct Queue *q,int size)
{
 q->size=size;
 q->front=q->rear=0;
 q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct Queue *q,int x)
{
 if((q->rear+1)%q->size==q->front)
 printf("Queue is Full");
 else
 {
 q->rear=(q->rear+1)%q->size;
 q->Q[q->rear]=x;
 }
}
int dequeue(struct Queue *q)
{
 int x=-1;

 if(q->front==q->rear)
 printf("Queue is Empty\n");
 else
 {
 q->front=(q->front+1)%q->size;
 x=q->Q[q->front];
 }
 return x;
}
void Display(struct Queue q)
{
 int i=q.front+1;

 do
 {

 printf("%d ",q.Q[i]);
 i=(i+1)%q.size;
 }while(i!=(q.rear+1)%q.size);

 printf("\n");
}
int main()
{
 struct Queue q;
 create(&q,5);

 enqueue(&q,10);
 enqueue(&q,20);
 enqueue(&q,30);
 enqueue(&q,40);
 enqueue(&q,50);
 enqueue(&q,60);
 Display(q);

 printf("%d ",dequeue(&q));
 return 0;
}



//In C++
// #include <iostream>

// using namespace std;
 
// class CircularQueue{
// private:
//     int size;
//     int front;
//     int rear;
//     int* Q;
// public:
//     CircularQueue(int size);
//     ~CircularQueue();
//     bool isFull();
//     bool isEmpty();
//     void enqueue(int x);
//     int dequeue();
//     void display();
// };
 
// CircularQueue::CircularQueue(int size) {
//     this->size = size;
//     front = 0;
//     rear = 0;
//     Q = new int [size];
// }
 
// CircularQueue::~CircularQueue() {
//     delete [] Q;
// }
 
// bool CircularQueue::isEmpty() {
//     if (front == rear){
//         return true;
//     }
//     return false;
// }
 
// bool CircularQueue::isFull() {
//     if ((rear + 1) % size == front){
//         return true;
//     }
//     return false;
// }
 
// void CircularQueue::enqueue(int x) {
//     if (isFull()){
//         cout << "Queue Overflow" << endl;
//     } else {
//         rear = (rear + 1) % size;
//         Q[rear] = x;
//     }
// }
 
// int CircularQueue::dequeue() {
//     int x = -1;
//     if (isEmpty()){
//         cout << "Queue Underflow" << endl;
//     } else {
//         front = (front + 1) % size;
//         x = Q[front];
//     }
//     return x;
// }
 
// void CircularQueue::display() {
//     int i = front + 1;
//     do {
//         cout << Q[i] << flush;
//         if (i < rear) {
//             cout << " <- " << flush;
//         }
//         i = (i + 1) % size;
//     } while (i != (rear + 1) % size);
// }
 
 
// int main() {
 
//     int A[] = {1, 3, 5, 7, 9};
 
//     CircularQueue cq(sizeof(A)/sizeof(A[0]) + 1);
 
//     // Enqueue
//     for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
//         cq.enqueue(A[i]);
//     }
 
//     // Display
//     cq.display();
//     cout << endl;
 
//     // Overflow
//     cq.enqueue(10);
 
//     // Dequeue
//     for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
//         cq.dequeue();
//     }
 
//     // Underflow
//     cq.dequeue();
 
//     return 0;
// }