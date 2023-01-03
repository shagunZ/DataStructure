#include<stdio.h>
#include<stdlib.h>

struct elements{
    int i,j,x;
};

struct sparse{
    int n;
    int m;
    int num;
    struct elements *e; //dynamic array
};

void create(struct sparse *s){
int i ; 
printf("enter dimensions m and n \n");
scanf("%d%d", &s->m, &s->n);
printf("enter number of non zero elements\n");
scanf("%d", &s->num );

s-> e=(struct elements *)malloc(s->num*sizeof(struct elements));
printf("enter non-zero elements \n");
for(i=0 ; i< s -> num ; i++){
    scanf("%d%d%d", &s->e[i].i , &s->e[i].j , &s->e[i].x);
} 


}

void display(struct sparse s){
    int i ,j , k=0;
    for(i=0;i<s.m;i++){
        for(j=0;j<s.n;j++){
            if(i==s.e[k].i && j==s.e[k].j)
            printf("%d ",s.e[k++].x);
            else
            printf("0 ");
        }
        printf("\n");
    }
}

int main(){
struct sparse s;
create(&s);
display(s);
return 0;
}