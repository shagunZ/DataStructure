//**************SORTING PRACTICE******************
#include<stdio.h>
#include<stdlib.h>
//1. BUBBLE SORT

void swap(int *x, int *y ){
    int temp = *x;
    *x = *y;
    *y = temp ; 
}

// void bubblesort(int A[], int n){
//     int flag=0;
//     int i,j;
//     for(i=0;i<n-1;i++){ //comparision
//     flag=0;
//         for(j=0;j<n-1-i;j++){ //swaps
//         if(A[j]>A[j+1])
//             swap(&A[j],&A[j+1]);
//             flag=1;
//     }
//     if(flag==0)
//     break;  //means already sorted
//     }
// }


// int main(){
// int A[] = {23,43,11,53,4};
// int n = 5;
// bubblesort(A,n);
// for(int i=0;i<n;i++){
//     printf("%d ",A[i]);
// }
// return 0;
// }



//2.INSERTION SORT


// void insertionsort(int A[],int n){
//     int i , j,x;
//     for(i=1;i<n;i++){ //passes
//         j=i-1;
//         x=A[i];
//         while(j>-1 && A[j]>x){
//             A[j+1] = A[j];
//             j--;
//         }
//         A[j+1] = x;
//     }
// }


// int main(){
// int A[] = {33, 22,5,23,4};
// int n =5;
// int i ,j;
// insertionsort(A,n);
//  for(int i=0;i<n;i++){
//     printf("%d ",A[i]);
// }
// return 0;
// }


//3. SELECTION SORT


// void selectionsort(int A[],int n){
//     int i , j , k ;
//     for(i=0;i<n-1;i++){
//         for(j=k=i;j<n;j++){
//             if(A[k]>A[j]){
//                 k=j;
//             }
//             swap(&A[k],&A[i]);
//         }
//     }
// }

// int main(){
// int A[] = {33, 22,5,23,4};
// int n =5;
// int i ,j;
// selectionsort(A,n);
//  for(int i=0;i<n;i++){
//     printf("%d ",A[i]);
// }
// return 0;
// }


//4. QUICK SORT 


// int partition(int A[], int l, int h){
//     int i = l , j = h ;
//     int pivot = A[l];
//     do{
//         do{i++;}while(A[i]<=A[l]);
//         do{j--;}while(A[j]>A[l]);
//         if(i<j){
//             swap(&A[i], &A[j]);
//         }
//     }while(i<j);

//     swap(&A[l] , &A[j]);
//     return j;

// }


// void quicksort(int A[], int l , int h){
//     int j;
//     if(l<h){
//        j =  partition(A, l , h);
//         quicksort(A, l , j);
//         quicksort(A, j+1 ,h );
//     }
// }

// int main(){
// int A[] = {3, 23,13,43,33};
// int n =5;
// int i ,j;
// quicksort(A,0,n-1);
//  for(int i=0;i<n;i++){
//     printf("%d ",A[i]);
// }
// return 0;
// }



//5.COUNT SORT

// int findmax(int A[], int n){
//     int max = A[0];
//     int i ; 
//     for(i= 0 ; i<n;i++){
//         if(A[i]>max)
//         max=A[i];
//     }
//     return max;
// }

// void countsort(int A[],int n ){
//     int i,j , max, *C;
//     max = findmax(A,n);
//     C = (int *)malloc(max+1*sizeof(int));
//     for(i=0;i<max+1;i++){
//         C[i] = 0;
//     }
//     for(i=0;i<n;i++){
//         C[A[i]]++ ;
//     }
//     i=0,j=0;
//     while(j<max+1){
//         if(C[j]>0){
//             A[i++] = j;
//             C[j]--;
//         }
//         else 
//         j++;
//     }
// }

// int main(){
// int A[] = {3, 23,13,43,33};
// int n =5;
// int i ,j;
// countsort(A,n);
//  for(int i=0;i<n;i++){
//     printf("%d ",A[i]);
// }
// return 0;
// }




//6.MERGE SORT

void merge(int A[],int l,int mid,int h)
{
 int i=l,j=mid+1,k=l;
 int B[100];
 while(i<=mid && j<=h)
 {
 if(A[i]<A[j])
 B[k++]=A[i++];
 else
 B[k++]=A[j++];
 }
 for(;i<=mid;i++)
 B[k++]=A[i];
 for(;j<=h;j++)
 B[k++]=A[j];
 for(i=l;i<=h;i++)
 A[i]=B[i];
}


void mergeSort(int arr[], int l, int r)
{
if (l < r)
{
// Finding mid element
int m = l+(r-l)/2;
// Recursively sorting both the halves
mergeSort(arr, l, m);
mergeSort(arr, m+1, r);
 
// Merge the array
merge(arr, l, m, r);
}
}


int main()
{
 int A[]={11,5,14,2,6,3,1},n=7,i;
 mergeSort(A,0,n-1);
 for(i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");
 return 0;
} 