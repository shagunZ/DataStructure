#include<stdio.h>
// #include <iostream>
// #include<math.h>

void swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

int partition(int A[],int l,int h){
   int pivot = A[l];
   int i = l,j=h;
   do{
       do{i++;}while(A[i]<=pivot);
       do{j--;}while(A[j]>pivot);
       if(i<j)swap (&A[i],&A[j]);

   }while(i<j);

   swap(&A[l],&A[j]);
   return j;
  
}

void quicksort(int A[],int l, int h)
{
    int j;
    if(l<h)
    {
        j=partition(A,l,h);
        quicksort(A,l,j);
        quicksort(A,j+1,h);
    }
}

int main(){

int A[]={11,13,7,2,6,9,4,5,10,3};
int n=11,i;
quicksort(A,0,n-1);
for(int i=0;i<n;i++)
printf("%d ",A[i]);
printf("\n");
return 0;
}
