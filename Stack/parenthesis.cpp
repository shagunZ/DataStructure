#include<iostream>
#include <stdio.h>
#include <stdlib.h>
 #include <cstring>
// #include<strings.h>
//[,{.(,),},]

using namespace std;

struct Node {
    char data; 
    struct Node *next; 
}*top = NULL; 


void push(char x){
    struct Node *t ;
    t = new Node; 
    if(t==NULL)cout<<"stack is full\n";
    else{
    t->data = x; 
    t->next = top;
    top = t; 
    }
}

char pop(){
    struct Node *t; 
    char x =-1; 
    if(top==NULL)cout<<"stack is empty\n";
    else{
    t = top ; 
    top = top->next;
    x = t->data; 
    free(t);

    }
    return x; 
}


int isBalanced(char *exp){
    int i ;
     for(i=0;exp[i]!='\0';i++){
        if(exp[i]=='(')push(exp[i]);
        else if(exp[i]==')'){
            if(top==NULL)return 0;
            pop();
        }
        
     }
     if(top==NULL)return 1; 
     return 0; 
}


char topElement(){
     if(top)return top->data; 
     return -1; 
}


/*
(-40
)-41
[-91
]-93
(-123
)-125
*/

int balanced (char exp[]){
    for(int i=0; exp[i] != '\0'; i++){
      if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{' ){
            push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i]== ']' || exp[i] == '}'){
            if(top == NULL)return 0;
            int a=0;
            if(exp[i] == ')')a = topElement()+1;
            if(exp[i] == ']')a = topElement()+2;
            if(exp[i] == '}')a = topElement()+2;
            if(exp[i] == a)pop();
        }

    }

    if(top == NULL)return 1; 
    return 0; 

}



int pre(char x){
    if(x=='+'||x=='-')return 1; 
    else if(x=='*'||x=='/')return 2; 
    else return 0; 
}


int isOperand(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/')return 0; 
    else return 1; 
}


char * InToPost(char *infix)
{
 int i=0,j=0;
 char *postfix;
 int len=strlen(infix);
 postfix=(char *)malloc((len+2)*sizeof(char));

 while(infix[i]!='\0')
 {
 if(isOperand(infix[i]))
 postfix[j++]=infix[i++];
 else
 {
 if(pre(infix[i])>pre(top->data))
 push(infix[i++]);
 else
 {
 postfix[j++]=pop();
 }
 }
 }
 while(top!=NULL)
 postfix[j++]=pop();
 postfix[j]='\0';
 return postfix;
}

int main(){

char *exp = "((a+b)*(c-d))";

cout<<isBalanced(exp);

cout<<endl; 

// char *brack = "{([a+b]*[c-d]/e}";
// cout<<balanced(brack);


//infix to postfix conversion
// char *infix="a+b*c-d/e";
//  push('#');

//  char *postfix=InToPost(infix);

//  printf("%s ",postfix);

return 0;
}