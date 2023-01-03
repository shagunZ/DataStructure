#include<iostream>
using namespace std;
//GET() , SET() , MAX() , MIN() , SUM()
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

int Get(struct Array arr,int index){
    if(index>=0 && index<arr.length)
    return arr.A[index];
return -1;
}

void Set(struct Array *arr, int index, int x){
    if(index>=0 && index<arr->length)
     arr->A[index]=x;
}

int Max(struct Array arr){
    int max = arr.A[0];
    int i ; 
    for( i = 1; i< arr.length;i++){
        if(arr.A[i]>max)
          max = arr.A[i];
    }
    return max;
}
int Min(struct Array arr){
    int min = arr.A[0];
    int i ; 
    for( i = 1; i< arr.length;i++){
        if(arr.A[i]<min)
          min = arr.A[i];
    }
    return min;
}

int sum (struct Array arr){
    int s = 0;
    int i ; 
    for(i=0; i<arr.length; i++){
        s = s + arr.A[i];
    }
        return s;

}

float avg(struct Array arr){
    return (float)sum(arr)/arr.length;
}
int main(){
struct Array arr={{2,3,4,5,6},10,5};
// printf("%d\n",Get(arr,2));
// Set(&arr,0,15);
printf("%d\n",Max(arr));
printf("%d\n",Min(arr));
printf("%d\n",sum(arr));
printf("%f\n",avg(arr));
        Display(arr);
    
    return 0;
}