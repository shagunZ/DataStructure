#include<iostream>
using namespace std;
 

struct Stack{
    int size; 
    int top; 
    int *s;
};

void create(struct Stack *st){
    cout<<"enter size"; 
    cin>> st->size; 
    // scanf("%d",&st->size); 
    st->top = -1; 
    st->s = new int[st->size];
}

void display(struct Stack st){
    int i ; 
    for(i=st.top ; i>=0;i--){
        cout<<st.s[i]<<endl;
    }
}

void push(struct Stack *st, int x){
    if(st->top==st->size-1)
        cout<<"stack overflow\n";
    else{
        st->top++;
        st->s[st->top]=x;
    } 
}

int pop(struct Stack *st){
    int x = -1;
    if(st->top==-1)
        cout<<"stack underflow\n";
    else{
        x=st->s[st->top--];
        }
    return x;  
}

int peek(struct Stack st, int index){
    int x = -1; 
    if(st.top - index +1 <0)
        cout<<"invalid index"<<endl;
    x = st.s[st.top-index+1];
    return x; 
}

int isEmpty(struct Stack st){
    if(st.top == -1)return 1;
    return 0;
}
int isFull(struct Stack st){
    if(st.top == st.size-1)return 1;
    return 0;
}

int stackTop(struct Stack st){
    if(!isEmpty(st))
        return st.s[st.top];
    return -1;  
}

int main(){
struct Stack st; 
create(&st); 
push(&st, 10);
push(&st, 20);
push(&st, 30);
push(&st, 40);
push(&st, 50);

display(st);
cout<<"peek"<<peek(st,2)<<endl;
cout<<"isEmpty"<<isEmpty(st)<<endl;
cout<<"isFull"<<isFull(st)<<endl;
cout<<"stackTop"<<stackTop(st)<<endl;

cout<<"after pop"<<endl;
pop(&st);
pop(&st);
display(st);

return 0;
}