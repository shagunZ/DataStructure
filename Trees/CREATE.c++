#include "Queuecpp.h"

//this file is same as Createcpp.c++

class Tree{
    Node *root; 
    public:
    // Node *root; 
    Tree(){root=NULL;}
    void Createtree();
    //to make Node *root private,we need to make nonparameterised constructor and call it recursively;
    void preorder(){preorder(root);}
    void postorder(){postorder(root);}
    void inorder(){inorder(root);}
    void preorder(Node *p);
    void postorder(Node *p);
    void inorder(Node *p);
    void Levelorder(Node *p);
    int Height(Node *p);
};

void Tree::Createtree(){
    Node *p, *t; 
    int x; 
    Queue q(100); 
    printf("enter root value");
    scanf("%d",&x);
    root = new Node; 
    root->data = x; 
    root->lchild=root->rchild=NULL;
    q.enqueue(root);

    while(!q.isEmpty()){
        p=q.dequeue();
        cout<<"enter left child of "<<p->data;
        cin>>x;
        if(x!=-1){
            t = new Node; 
            t->data = x; 
            t->lchild=t->rchild=NULL;
            p->lchild=t; 
            q.enqueue(t);
        }
        cout<<"enter right child of "<<p->data;
        cin>>x;
        if(x!=-1){
            t = new Node; 
            t->data = x; 
            t->lchild=t->rchild=NULL;
            p->rchild=t; 
            q.enqueue(t);
        }

    }
}

void Tree::preorder( Node *p){
    if(p){
        cout<<p->data<<" "; 
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void Tree:: inorder(Node *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" "; 
        inorder(p->rchild);
    }
}
void Tree::postorder(Node *p){
    if(p){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" "; 
    }
}

void Tree::Levelorder( Node *root)
{
 Queue q(100);

 printf("%d ",root->data);
 q.enqueue(root);

 while(!q.isEmpty())
 {
 root=q.dequeue();
 if(root->lchild)
 {
 printf("%d ",root->lchild->data);
 q.enqueue(root->lchild);
 }
 if(root->rchild)
 {
 printf("%d ",root->rchild->data);
 q.enqueue(root->rchild);
 }
 }
}
int Tree::Height( Node *root)
{
 int x=0,y=0;
 if(root==0)
 return 0;
 x=Height(root->lchild);
 y=Height(root->rchild);
 if(x>y)
 return x+1;
 else
 return y+1;

}

int main(){

    Tree t;
    t.Createtree();
    cout<<"\npreorder\n";
    // t.preorder(t.root);
    t.preorder();
    cout<<"\npostorder\n";
    // t.postorder(t.root);
    t.postorder();
    cout<<"\ninorder\n";
    // t.inorder(t.root);
    t.inorder();

    return 0;
}