#include<iostream>

class Node {
    int data; 
    Node *next; 
};

class LinkedList {
private: 
Node *first; 
public: 
LinkedList(){first = NULL;}
LinkedList(int A[], int n); 
 ~LinkedList(); 

void Display(); 
void Insert(int index, int x); 
int Delete(int index); 
int Length();
};


//CREATE FUNCTION
LinkedList::LinkedList(int A[],int n){
 
}

//DESTRUCTOR - deleting of entire linkedlist 
LinkedList::~LinkedList(){
    Node *p = first ;
    while(first){
        first = first->next; 
        delete p ; 
         p = first; 
    }
}

//DISPLAY 


int main(){
int A[]={1,2,3,4,5};
// LinkedList 1(A,5);


return 0;
}