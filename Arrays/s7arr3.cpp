#include<iostream>
using namespace std;
    //LINEAR SEARCH
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

//  int Linearsearch(struct Array arr,int key ){      
//      int i ; 
//      for( i=0; i<arr.length; i++ ){             //IMPROVING MAI -> , SIMPLE VALE MAI arr.length
//          if(key == arr.A[i]){
//                   return i;
//                }
//      }
//      return -1;
//  }
// int main(){

// struct Array arr={{2,3,4,5,6},10,5};
// printf("key is found at index %d\n",Linearsearch(arr,4));
// Display(arr);
//     return 0;
// }

//TRANSPOSITION and MOVE TO FRONT VALA LINEAR SEARCH
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }

 void swap(int *x, int *y){         //IMPROVING LINEAR SEARCH 
     int temp = *x;
     *x=*y;
     *y = temp;
 }

 int Linearsearch(struct Array *arr,int key ){       //improving ke liye access chahia trf *
     int i ; 
     for( i=0; i<arr->length; i++ ){             //IMPROVING MAI -> , SIMPLE VALE MAI arr.length
         if(key == arr->A[i]){
            //  swap(&arr->A[i],&arr->A[i-1]);      //Transposition 
             swap(&arr->A[i],&arr->A[0]);      //Move to front
               return i;
               }
     }
     return -1;
 }
int main(){

struct Array arr={{2,3,4,5,6},10,5};
printf("key is found at index %d\n",Linearsearch(&arr,5));
Display(arr);
    return 0;
}