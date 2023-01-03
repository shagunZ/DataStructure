
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//display, Rdisplay, Sum, Count

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


void RDisplay(struct Node *p){
if(p!=NULL){
  printf("%d ",p->data);
  RDisplay(p->next);
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

int Rcount(struct Node *p){
  int l =0;
  if(p!=NULL)
      return Rcount(p->next) +1;
  else 
      return 0;
  
}

int Sum(struct Node *p){
  int sum =0;
  while(p){
    sum = sum + p->data;
    p=p->next;
  }
  return sum;
}

int Rsum(struct Node *p){
if(p==NULL) return 0;
else 
return Rsum(p->next) + p->data;
}

int Max(struct Node *p){
  int max = INT32_MIN;
  while(p){
    if(p->data>max)
        max = p->data;
    p=p->next;
  }
  return max;
}

int Rmax(struct Node *p){
  int x =0;
 if(p==0)
 return INT32_MIN;
 x=Rmax(p->next);
 if(x>p->data)
     return x;
  else return p->data;
}


struct Node *LSearch(struct Node *p, int key){
 //improving linear search 
  struct Node *q= NULL; 
  while(p!=NULL){
    if(key==p->data){
      q->next = p->next; 
      p->next = first; 
      first = p; 
      return p ; 
    }
    q = p ; 
    p = p->next;  
  }
  return NULL; 
}
struct Node *RSearch(struct Node *p, int key){
   while(p!=NULL){
    if(p==NULL)return NULL ; 
    if(key==p->data)return p; 
    
    return RSearch(p->next,key);  
   }
 
}


int main(){

int A[]={3,4,5,6,7};
create(A,5);

  struct Node *temp ;
  temp = LSearch(first, 5); 
if(temp)cout<<"key is found "<<temp->data<<endl; 
else cout<<"not found"<<endl; 

Display(first);

// RDisplay(first);
// printf("length is %d\n",count(first));
// printf("Rlength is %d\n",Rcount(first));
// printf("sum is %d\n",Sum(first));
// printf("Rsum is %d\n",Rsum(first));
// printf("Max is %d\n",Max(first));
// printf("Rmax is %d\n",Rmax(first));
return 0;
}


