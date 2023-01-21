#include<iostream>
using namespace std;

class Node{
    public:
    Node* left; 
    int data; 
    Node* right; 
};

class BST{
Node *root; 
public:
    BST(){root = NULL;}
    Node* Insert(Node* root,int key);
    Node *Search(Node*p,int key);
    Node* getroot(){return root;}
};

Node *BST::Search(Node*p,int key){
     
    if(p==NULL)return NULL; 
    if(key==p->data)return p; 
    if(key<p->data)
        p->left = Search(p->left,key);
    if(key>p->data)
        p->right = Search(p->right,key);
}

Node* BST::Insert(Node* root,int key){
    Node *t; 

    if(root==NULL){
        t = new Node;
        t->data = key;
        t->left=t->right=NULL;
        root=t;
        return t;
    }
    if(key<root->data){
        root->left = Insert(root->left,key);
    }
    if(key>root->data){
        root->right = Insert(root->right,key);
    }
    return root; 
}
 
int main(){
BST bst; 
bst.Insert(bst.getroot(),33);
bst.Insert(bst.getroot(),323);
bst.Insert(bst.getroot(),133);
cout<<bst.Search(bst.getroot(),133);
return 0;
}