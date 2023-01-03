#include "headerfile.h"

struct Node *root=NULL; 

void treecreate(){
    struct Node *p, *t; 
    int x; 
    struct Queue q; 
    create(&q,100);
    printf("enter root value");
    scanf("%d",&x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x; 
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);

    while(!isEmpty(q)){
        p=dequeue(&q);
        cout<<"enter left child of "<<p->data;
        cin>>x;
        if(x!=-1){
            t = new Node; 
            t->data = x; 
            t->lchild=t->rchild=NULL;
            p->lchild=t; 
            enqueue(&q,t);
        }
        cout<<"enter right child of "<<p->data;
        cin>>x;
        if(x!=-1){
            t = new Node; 
            t->data = x; 
            t->lchild=t->rchild=NULL;
            p->rchild=t; 
            enqueue(&q,t);
        }

    }
}

void preorder(struct Node *p){
    if(p){
        cout<<p->data<<" "; 
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void inorder(struct Node *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" "; 
        inorder(p->rchild);
    }
}
void postorder(struct Node *p){
    if(p){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" "; 
    }
}

void LevelOrder(struct Node *root){
    struct Queue q; 
    create(&q,100);
    cout<<root->data; 
    enqueue(&q,root);

    while(!isEmpty(q)){
        root=dequeue(&q);
        if(root->lchild){
            cout<<root->lchild->data;
            enqueue(&q,root->lchild);
        }
        if(root->rchild){
            cout<<root->rchild->data;
            enqueue(&q,root->rchild);
        }
    }
}

int count(struct Node *root){
    if(root)
        return count(root->lchild)+count(root->rchild)+1;
    return 0;
}

int height(struct Node *root){
    int x=0,y=0;
    if(root==0)return 0;
    x=height(root->lchild);
    y=height(root->rchild);
    if(x>y)return x+1;
    else return y+1;
}

int main(){

    treecreate();

    cout<<count(root);
    cout<<endl<<height(root);
    // preorder(root);
    // inorder(root);
    // postorder(root);
    // LevelOrder(root);
    return 0;
}