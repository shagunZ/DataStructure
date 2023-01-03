#include<iostream>
using namespace std;
//check if array is Sorted 1.2.3.

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
void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }

void Insertsort(struct Array *arr,int x){
    int i =arr->length-1;
    if(arr->length == arr->size)
    return ;
    
    while(arr->A[i] > x){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;

}
int isSorted(struct Array arr){
   int i ;
   for(i=0;i<arr.length-1;i++){
       if(arr.A[i]>arr.A[i+1])
    return 0;
   }
    return 1;
}

void Rearrange(struct Array *arr){
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0)
        i++;
        while(arr->A[i]>=0)
        j--;
        if(i<j)
        swap(&arr->A[i],&arr->A[j]);
    }
}

int main(){
struct Array arr1={{-2,3,-4,15,-16},10,5};
//   Insertsort(&arr1,12);
//  printf("%d \n",isSorted(arr1)); 
  Rearrange(&arr1);
  
    Display(arr1);
    
    return 0;
}