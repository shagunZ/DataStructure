#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//CHECK SORT ,REMOVE DUPLICATES, REVERSING A LL , CONCATENATION , MERGING

struct Node{
    int data; 
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

void create(int A[], int n){
  int i ; 
  struct Node *t, *last; 
  first= (struct Node *)malloc(sizeof(struct Node));
  first ->data = A[0];
  first ->next = NULL; 
  last = first; 

  for(i=1;i<n;i++){
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next=t;
    last=t;
  }
}


void Display(struct Node *p){
    while(p!=NULL){
        printf("%d ---> ",p->data);
        p=p->next;
    }
}

int count(struct Node *p){
  int l =0; //length of l.l
  while(p){
    l++;
    p=p->next;
  }
  return l;
}




int isSorted(struct Node *p ){
    int x = -65536; 
    while(p!=NULL){
        if(p->data<x) 
            return 0;
        x = p->data; 
        p = p->next;  
    }
    return 1; 
}





void RemoveDuplicate(struct Node *p){
    Node *q = p->next; 
    while(q!=0){
        if(p->data != q->data){
            p = q; 
            q = q->next; 
        }
        else{
            p->next  = q->next; 
            delete q; 
            q = p->next; 
        }
    }
}




void Reverse1(struct Node *p){
    int *A, i = 0;    
    struct Node *q ;
    A = new int[count(p)];
    while(q!=NULL){
        A[i] = q->data; 
        q=q->next; 
        i++;  
    }
     q = p; 
     i--; 
     while(q!=NULL){
        q->data = A[i];
        q = q->next ;
        i--;
     }
}


void Reverse2(struct Node *p){
    struct Node *q = NULL, *r= NULL; 
    while(p!= NULL){
         r = q; 
         q = p ; 
         p = p->next; 
         q->next = r; 
    }
    first = q;
}


void Reverse3(struct Node *q,struct Node *p ){
    if(p){
        Reverse3(p,p->next); 
        p->next = q; 
    }
    else 
    first = q; 
}





void create2(int A[], int n){
  int i ; 
  struct Node *t, *last; 
second= (struct Node *)malloc(sizeof(struct Node));
  second ->data = A[0];
  second ->next = NULL; 
  last = second; 

  for(i=1;i<n;i++){
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next=t;
    last=t;
  }
}


void Concat(struct Node *p,struct Node *q){
third = p ; 
while(p->next!=NULL){
    p = p->next; 
}
 p->next = q ; 

}



void Merge(struct Node *p,struct Node *q)
{
 struct Node *last;
 if(p->data < q->data)
 {
 third=last=p;
 p=p->next;
 third->next=NULL;
 }
 else
 {
 third=last=q;
 q=q->next;
 third->next=NULL;
 }
 while(p && q)
 {
 if(p->data < q->data)
 {
 last->next=p;
 last=p;
 p=p->next;
 last->next=NULL;
 
 }
 else
 {
 last->next=q;
 last=q;
 q=q->next;
 last->next=NULL;
 
 }
 }
 if(p)last->next=p;
 if(q)last->next=q;
 
}



int main(){

int A[]={10,20,30,40,50};
int B[]={1,2,3,4,5};
create(A,5);
create2(B,5);

// if(isSorted(first)){
//     cout<<"sorted"; 
// }
// else{
//     cout<<"not sorted"; 
// }


// RemoveDuplicate(first); 


// Reverse1(first); 
// Reverse2(first); 
Reverse3(NULL,first); 





cout<<endl<<endl; 
cout<<"display first"<<endl;
Display(first);
cout<<"display second"<<endl;
Display(second);


// cout <<endl; 
// Concat(first, second);
// cout<<"concatenation"<<endl; 
// Display(third);

cout <<endl; 
Merge(first, second);
cout<<"merging"<<endl; 
Display(third);


return 0;
}


