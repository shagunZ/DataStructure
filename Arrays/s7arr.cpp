#include<iostream>
using namespace std;
#include<stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("elements are \n");
    for(i=0;i<arr.length;i++){
     printf("%d ",arr.A[i]);
    }
}
int main(){
    struct Array arr={{2,3,4,5,6},10,5};
    
    Display(arr);
    return 0;
}
//AS A POINTER
// struct Array{
//     int *A;
//     int size;
//     int length;
// };

// void Display(struct Array arr){
//     int i;
//     printf("elements are \n");
//     for(i=0;i<arr.length;i++){
//      printf("%d ",arr.A[i]);
//     }
// }
// int main(){
//     struct Array arr;
//     int n,i;
//     printf("enter size of array\n");
//     scanf("%d",&arr.size);
//     arr.A = (int *)malloc(arr.size*sizeof(int)); //arr.A bcoz A is inside arr;
//     arr.length=0;

//     printf("enter numbers of numbers\n");
//     scanf("%d",&n);

//     printf("enter all elements\n");
//     for(i=0 ;i <n;i++){
//      scanf("%d",&arr.A[i]);
//     }
//     arr.length= n;
//     Display(arr);
//     return 0;
// }