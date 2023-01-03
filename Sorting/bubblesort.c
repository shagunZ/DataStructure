#include<stdio.h>

void swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

void Bubble(int A[],int n){
    int flag=0;
    int i,j;
    for(i =0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1])
               {
                    swap(&A[j],&A[j+1]);
                flag=1;
               }
        }
        if(flag==0)  
        break;
        //means array is already sorted
    }
}

int main(){
// int A[]={3,7,9,10};
// int n=4;
int n , A[5];
scanf("%d",&n);
for(int i =0;i<n;i++){
    scanf("%d",&A[i]);
}
Bubble(A,n);
for(int i=0;i<n;i++)
printf("%d ",A[i]);
printf("\n");
return 0;
}