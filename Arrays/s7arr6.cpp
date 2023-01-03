#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//REVERSE


// struct Array
// {
//  int A[10];
//  int size;
//  int length;
// };
//  void Display(struct Array arr)
//  {
//  int i;
//  printf("\nElements are\n");
//  for(i=0;i<arr.length;i++)
//  printf("%d ",arr.A[i]);
//  }
// void swap(int *x,int *y)
//  {
//  int temp=*x;
//  *x=*y;
//  *y=temp;
//  }
// void Reverse(struct Array *arr)
// {
//  int *B;
//  int i,j;

//  B=(int *)malloc(arr->length*sizeof(int));
//  for(i=arr->length-1,j=0;i>=0;i--,j++)
//  B[j]=arr->A[i];
//  for(i=0;i<arr->length;i++)
//  arr->A[i]=B[i];

// }

// void Reverse2(struct Array *arr)
// {
//  int i,j;
//  for(i=0,j=arr->length-1;i<j;i++,j--)
//  {
//  swap(&arr->A[i],&arr->A[j]);
//  }
// }

// int main(){
// struct Array arr1={{2,3,4,5,6},10,5};
//     Reverse(&arr1);
//     // Reverse2(&arr1);
//     Display(arr1);
//     return 0;
// }


//left shift/ left rotation 

class leftshift{
 public:
 int A[10];
 int size;
 int length;
};

void shift(leftshift *arr){
    for(int i =1;i<arr->length; i++){
        arr->A[i-1] = arr->A[i];
    }
    arr->A[arr->length-1] = 0; 
}

void rotate(leftshift *arr){
    int x ;
         x = arr->A[0];
    for(int i =1;i<arr->length; i++){
        arr->A[i-1] = arr->A[i];
    }
    arr->A[arr->length-1] = x; 
}

 void display(leftshift arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);

 }

int main(){
    leftshift arr1 = {{3,4,5,6,7},10,5};
    leftshift arr2 = {{13,14,15,16,17},10,5};
    shift(&arr1);
    display(arr1);
    rotate(&arr2);
    display(arr2);
    return 0; 
}