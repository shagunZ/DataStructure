#include<iostream>
using namespace std;

int main(){
    //WAYS TO ACCESS ELEMENTS OF AN ARRAY
    // int arr[5] = {2,3,4,7,5};
    // for(int i = 0 ; i<5;i++){
    //     printf("%d\n",arr[i]);
    // }
    // printf("%d\n",arr[2]);
    // printf("%d\n",2[arr]);
    // printf("%d\n",*(arr+2));
    // printf("%d\n",*(2+arr));


//POINTERS REVISIT
// int a = 5;
// int *p;
// p=&a;
// cout<<"value of p is"<<p<<endl;
// cout<<"value of *p is"<<*p<<endl;
// cout<<"value of a is"<<a<<endl;
// cout<<"value of &a is"<<&a<<endl;

//DYNAMIC MEMORY ALLOCATION
// int *p ;
// p = (int *)malloc(5*sizeof(int));
// p[0]=24;
// p[1]=40;
// p[2]=4;
// p[3]=42;
// p[4]=34;
// for(int i = 0 ; i<5;i++){
//     printf("%d\n",p[i]);
//     }
//     free (p);

//STATIC VS DYNAMIC ARRAY
// int A[5]={2,4,6,8,10};
// int *p;
// p = (int *)malloc(5*sizeof(int));
//  p[0]=24;
// p[1]=40;
// p[2]=4;
// p[3]=42;
// p[4]=34;
// for(int i = 0 ; i<5;i++){
//     printf("%d\n",A[i]);
// }
//  printf("A is static and p is dynamic\n");
// for(int i = 0 ; i<5;i++){
//        printf("%d\n",p[i]);
// }


//INCREASING THE SIZE OF AN ARRAY
int *p,*q;
p= (int *)malloc(5*sizeof(int));
p[0]=3;
p[1]=5;
p[2]=7;
p[3]=9;
p[4]=11;

q= (int *)malloc(10*sizeof(int));

for(int i = 0 ;i<5;i++)
   q[i]=p[i];
free(p);
p=q;
q=NULL;
for(int i = 0 ;i<5;i++){
    printf("%d\n",p[i]);
}
    return 0;
}
