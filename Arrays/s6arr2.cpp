#include<iostream>
using namespace std;

int main(){
    //2D ARRAYS 3 methods:)
    int A[3][4]= {{1,2,3,4},{2,4,6,8},{3,5,7,9}};
  for(int i = 0 ;i<3;i++){
      for(int j= 0;j<4;j++){
          printf("%d ",A[i][j]);
      }
      printf("\n");
  }

cout<<endl;
 int *B[3];
 int **C;
 B[0] = (int *)malloc(4*sizeof(int));
 B[1] = (int *)malloc(4*sizeof(int));
 B[2] = (int *)malloc(4*sizeof(int));

  for(int i = 0 ;i<3;i++){
      for(int j= 0;j<4;j++){
          printf("%d ",B[i][j]);
      }
      printf("\n");
  }

cout<<endl;
 C = (int **)malloc(3*sizeof(int *));
   C[0]= (int *)malloc(4*sizeof(int));
   C[1]= (int *)malloc(4*sizeof(int));
   C[2]= (int *)malloc(4*sizeof(int));

  for(int i = 0 ;i<3;i++){
      for(int j= 0;j<4;j++){
          printf("%d ",C[i][j]);
      }
      printf("\n");
  }
    return 0;
}