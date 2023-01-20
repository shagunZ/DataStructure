#include<iostream>
#include <queue>
using namespace std;

class Node{
public:
    Node* leftchild;
    int data; 
    Node* rightchild;
};

class Tree{
    private:
    Node* root;
    public:
    Tree(){
        root=NULL;
    };
    ~Tree(){
        
    }
  void createtree(){
    Node *t,*p;
    //p is moving pointer and t is new node created that pointer ;
    int x; 
    queue<Node*> q; 
    root = new Node ; 
    cout<<"enter root x";
    cin>>x; 
    root->data = x; 
    root->leftchild=root->rightchild=NULL; 
    q.emplace(root);

    while(!q.empty()){
         p = q.front();
         q.pop();
        cout<<"left data ";
        cin>>x; 
        if(x!=-1){
            t = new Node; 
            t->data = x ;
            t->leftchild=t->rightchild=NULL; 
            q.emplace(t);    
            p->leftchild= t; 
        }
        cout<<"right data ";
        cin>>x; 
        if(x!=-1){
            t = new Node; 
            t->data = x ;
            t->leftchild=t->rightchild=NULL; 
            q.emplace(t);    
            p->rightchild=t; 
        }
    }
  }
  void Preorder(){
    Preorder(root);
  }
  void Preorder(Node *p ){
    if(p){

    cout<<p->data<<","<<flush;
    Preorder(p->leftchild);
    Preorder(p->rightchild);
    }
  }

  int Height(Node* p){
    int l =0,r=0;
    if(p==NULL) return 0; 
    l = Height(p->leftchild);;
    r=Height(p->rightchild);
    if(l>r)return l+1; 
    else return r+1; 
  }
  int Height(){ return Height(root);}

  void Levelorder(){Levelorder(root);}
  void Levelorder(Node *p){
    queue<Node*> q; 
    cout<<root->data<<","<<flush; 
    q.emplace(root);
    while(!q.empty()){
        p=q.front();
        q.pop();
        if(p->leftchild){cout<<p->leftchild->data<<", "<<flush;
        q.emplace(p->leftchild);
    }
        if(p->rightchild){cout<<p->rightchild->data<<", "<<flush;
        q.emplace(p->rightchild);
    }
  }
  }

 int searchinorder(int inarray[],int instart, int inend, int data){
    for(int i = instart; i<=inend; i++){
        if(inarray[i]==data)return i ; 
    }
    return -1 ;
 }

//   Node* generatefromtraversal(int *inorder,int *preorder,int instart,int inend){
//     static int preindex = 0 ; 
//     if(instart>inend)return NULL; 
//     Node* node = new Node(preorder[preindex++]);
//     if(instart==inend)return node; 

//     int splitindex = searchinorder(inorder,instart,inend,node->data);
//     node->leftchild = generatefromtraversal(inorder,preorder,instart,splitindex-1);
//     node->rightchild= generatefromtraversal(inorder,preorder,splitindex+1,inend);

//     return node; 

//   }

};

int main(){
Tree bin;
bin.createtree();
// bin.Preorder();
cout<<bin.Height();
// bin.Levelorder();
return 0;
}