#include<iostream>
using namespace std;
 


struct Node {
    struct Node *lchild; 
    int data; 
    struct Node *rchild;
}*root=NULL;

void Insert(int key){
    struct Node *t=root;
    struct Node *r=NULL,*p;

    if(root == NULL){
        p=new Node; 
        p->data = key; 
        p->lchild=p->rchild=NULL;
        root = p ;
        return;
    }
//else
    while(t!=NULL){
        r=t; 
        if(key<t->data)
            t=t->lchild;
        else if(key>t->data)
            t=t->rchild; 
        else 
            return; 
    }
    p=new Node; 
    p->data = key; 
    p->lchild=p->rchild=NULL;

    if(key<r->data)r->lchild=p;
    else r->rchild=p;
}

struct Node *RInsert(struct Node *p,int key){
    struct Node *t; 
    if(p==NULL){
        t=new Node; 
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t; 
    }
    if(key<p->data)
    p->lchild=RInsert(p->lchild,key);
    else if(key>p->data)
    p->rchild=RInsert(p->rchild,key);
}

void inorder(struct Node *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" "; 
        inorder(p->rchild);
    }
}

struct Node *Search(int key){
    struct Node *t =root; 
    while(t!=NULL ){
        if(key==t->data)return t; 
        else if(key<t->data) t=t->lchild;
        else t=t->rchild;
    }
    return NULL;
}

int Height(struct Node *p){
    int x,y; 
    if(p==NULL)return 0; 
    x=Height(p->lchild);
    y=Height(p->rchild);
    return x>y?x+1:y+1;
}

struct Node *InPre(struct Node *p){
    while(p && p->rchild!=NULL)
        p=p->rchild;
    return p; 
}

struct Node *InSucc(struct Node *p){
    while(p && p->lchild!=NULL)
        p=p->lchild;
    return p; 
}


struct Node *Delete(struct Node *p,int key){
    struct Node *q; 

    if(p==NULL)return NULL; 
    if(p->lchild==NULL && p->rchild==NULL&&p->data==key){
        if(p==root)root=NULL;
        free(p);
        return NULL;
    }
   if(key<p->data)
        p->lchild=Delete(p->lchild,key);
    else if(key>p->data)
        p->rchild=Delete(p->rchild,key);
    else{
        if(Height(p->lchild)>Height(p->rchild)){
            q=InPre(p->lchild);
            p->data = q->data; 
            p->lchild=Delete(p->lchild,q->data);
        }
        else{
             q=InSucc(p->rchild);
            p->data = q->data; 
            p->rchild=Delete(p->rchild,q->data);
        }
    }
    return p;
}


int main(){
// Insert(10);
// Insert(5);
// Insert(20);
// Insert(8);
// Insert(30);
root =RInsert(root,10);
RInsert(root,5);
RInsert(root,20);
RInsert(root,8);
RInsert(root,30);

Delete(root,20);


inorder(root);


struct Node *temp ; 
temp = Search(20);
if(temp!=NULL)cout<<"\nfound: "<<temp->data; 
else cout<<"\nnot found ";
return 0;
}