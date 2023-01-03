//PRACTICE
#include<iostream>
using namespace std;
//INSERTING AN ELE
int main(){
    // int A[10],i,num,loc,length;
    // printf("enter size of array");
    // scanf("%d",&length);
    // for(int i =0;i<length;i++){
    //     printf("A[%d]=",i+1);
    //     scanf("%d",&A[i]);
    // }
    // printf("enter loc u want to insert");
    // scanf("%d",&loc);
    // printf("enter number want to insert");
    // scanf("%d",&num);

    // for(int i =length; i>=loc;i--){
    //     A[i]=A[i-1];
    // }
    // A[loc-1] = num;
    // length++;
    //  for(int i = 0;i<length;i++){
    //     printf("%d ",A[i]);
    // }



    //DELETING AN ELE
    // int A[10],i,num,loc,length;
    // printf("enter size of array");
    // scanf("%d",&length);
    // for(int i =0;i<length;i++){
    //     printf("A[%d]=",i+1);
    //     scanf("%d",&A[i]);
    // }
    // printf("enter loc u want to delete");
    // scanf("%d",&loc);

    // for(int i =loc;i<length;i++){
    //     A[i-1] = A[i];
    // }
    // length--;
    //  for(int i = 0;i<length;i++){
    //  printf("%d ",A[i]);
    // }



    //BINARY SEARCH 
    int A[9]= {2,5,7,9,14,19,20,37,56};
    int key,l=0,h=8;
    int found=1;
    printf("enter key you want to find");
    scanf("%d",&key);
    while(h>=l){
    int m= (l+h)/2;
        if(A[m]==key){
            printf("%d is located at %d index",key,m);
            return found;
        }
        else if(key<A[m]){
            h = m-1;
            
        }
        else{
            l=m+1;
        }
    }
      printf("key not found");
    


    return 0;
}