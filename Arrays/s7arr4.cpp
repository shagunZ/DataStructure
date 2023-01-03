#include<iostream>
using namespace std;
//BINARY SEARCH
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


 int Binarysearch(struct Array arr, int key ){
     int l, mid,h;
     l=0;
     h=arr.length-1;
     while(l<=h){
         mid = ((l+h)/2);
         if(key==arr.A[mid])
         return mid;
         else if(key<arr.A[mid])
            h = mid -1;
          else
         l=mid +1;
     }
     return -1;
 }

 int Rbinsearch(int a[], int l,int h ,int key){         //Recursive vala
    int mid;
    if(l<=h){
    mid = l+h/2;
    if(key==a[mid])
    return mid;
    else if(key< a[mid])
     return Rbinsearch(a,l,mid-1,key);
    else
     return Rbinsearch(a,mid+1,h,key);
    }
     return -1;
 }
    int main (){
struct Array arr={{2,3,4,5,6},10,5};
        
        // printf("%d/n",Binarysearch(arr,2));
        printf("%d/n",Rbinsearch(arr.A,0,arr.length,5));
        Display(arr);
    return 0;
}