
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//insert , delete 

struct Node{
    int data; 
    struct Node *next;
}*first=NULL;

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


void Insert(struct Node *p, int index, int x){
   
   struct Node *t; 
   if(index<0 || index>count(p))
    return; 
   
   t = new Node; 
   t->data = x; 

   if(index==0){
    t->next = first; 
    first= t; 
   }
   else{
    for(int i=0; i<index-1; i++){
        p = p->next; 
    }
        t->next = p->next; 
        p->next = t; 
   }

}

void SortedInsert(struct Node *p, int x){
    struct Node *t, *q = NULL; 
    t = new Node ;
    t->data = x; 
    t->next = NULL; 

    if(first ==NULL) first = t; 
    else {
        while(p && p->data<x){
            q = p ; 
            p = p->next; 
        }
        if(p==first){
            t->next = first; 
            first = t; 
        }
        else {
            t->next = q->next; 
            q->next = t; 
        }
    }
}

int main(){

int A[]={10, 20, 30, 40, 50};
create(A,5);

// Insert(first,0,10);
// Insert(first,1,11);
// Insert(first,2,12);
// Insert(first,0,13);

SortedInsert(first, 4);
cout<<endl<<endl; 

Display(first);


return 0;
}


