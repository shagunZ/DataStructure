



//Tree recursion
// #include<iostream>
// using namespace std; 
// void fun(int n ){
//     if(n>0){
//         cout<< n<<" "; 
//         fun(n-1);
//         fun(n-1);
//     }
// }

// int main(){
// int x  =3 ; 
// fun(x); 
// return 0;
// }



//Indirect recursion
// #include<iostream>
// using namespace std; 

// void funB(int n); 
// void funA(int n ){
//     if(n>0){
//         cout<< n<<" "; 
//         funB(n-1);
//     }
// }
// void funB(int n ){
//     if(n>1){
//         cout<< n<<" "; 
//         funA(n/2);
//     }
// }

// int main(){
// int x  =20 ; 
// funA(x); 
// return 0;
// }




//Nested recursion
// #include<iostream>
// using namespace std; 


// int fun(int n ){
//     if(n>100){
//         return n-10;
//     }
//     return fun(fun(n+11));
// }


// int main(){
// int r  = fun(95) ; 
// cout<<r; 
// return 0;
// }




//Taylors series e^x
#include<iostream>
using namespace std; 


// double e(int x, int n)
// {
//  static double p=1,f=1;
//  double r;

//  if(n==0)
//  return 1;
//  r=e(x,n-1);
//  p=p*x;
//  f=f*n;
//  return r+p/f;
// }
// int main()
// {
// cout<<e(4,10);
//  return 0;
// }


// double e(int x, int n)
// {
//  static double s;
//  double r;

//  if(n==0)
//  return s;
// s = 1 + x*s/n;
//  return e(x,n-1);
// }
// int main()
// {
// cout<<e(4,10);
//  return 0;
// }


// double e(int x, int n)
// {
//   double s=1;
// int i;

// double num = 1; 
// double den =1; 
// for(i=1;i<=n;i++){
//     num*=x; 
//     den*=i; 
//     s+=num/den;
// }
// return s; 
// }
// int main()
// {
// cout<<e(4,10);
//  return 0;
// }


//Fibonacci series 

// int fib(int n){
//     int t0=0,t1=1,s=0,i;
//     if(n<=1) return n ; 
//     for(i=2;i<=n;i++){
//         s = t0+t1; 
//         t0=t1; 
//         t1=s; 
//     }
//     return s; 
// }

// int rfib(int n){
//  int F[10];
//  if(n<=1)return n;
// return rfib(n-2) + rfib(n-1);
// }


// int F[10];
// int mfib(int n){
//     if(n<=1){
//     F[n] = n; 
//     return n;
//      }
//      else{
//  if(F[n-2]==-1)
//     F[n-2] =mfib(n-2);
//     if(F[n-1]==-1)
//     F[n-1]=mfib(n-1);

//     return F[n-2] + F[n-1];
// }
// }

// int main(){

// for(int i =0; i<10; i++){
// F[i]=-1 ;  
// }
 
// cout<<mfib(6);
//     return 0; 
// }




//nCr 

// int fact(int n ){
//     if(n==0)return 1; 
//     return fact(n-1)*n ;
// }
// int ncr(int n , int r){
//     int num, den; 
//     num = fact(n); 
//     den = fact(r)*fact(n-r); 
//     return num/den; 
// }

// int NCR(int n , int r){
//     if(n==r || r==0) return 1; 
//     return NCR(n-1,r-1) + NCR(n-1,r);
// }

// int main(){
// cout<<NCR(4,2);
//     return 0;
// }



//Tower of Hanoi 

void TOH (int n , int A, int B, int C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"("<<A<<","<<C<<")"<<"\n";
        TOH(n-1,B,A,C);
    }
}

int main(){
TOH(3,1,2,3);
    return 0;
}