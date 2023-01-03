//sum of first n natural numbers; 

// #include<iostream>
// using namespace std ; 

// int sum(int n ){
//     if (n==0) return 0; 
//     else
//     return sum(n-1) + n ; 
// }

// int Isum(int n ){
//     int s = 0; 
//     int i ; 
//     for(i=1;i<=n;i++)
//     s = s+ i ; 
//     return s; 
// }

// int main(){

// int n = 5 ; 
// cout<<sum(n);
// cout<<endl;
// cout<<Isum(n);
// return 0;
// }







//factorial of a number

// #include<iostream>
// using namespace  std; 

// int factorial(int n ){
//     if(n<=0) return 1; 
//     else 
//     return factorial(n-1)*n; 
// }

// int Ifact(int n){
//     int f=1; 
//     int i ; 
//     for(i=1;i<=n;i++)
//         f = f*i; 
//         return f; 
    
// }

// int main(){
// int n = 4; 
// cout<<factorial(n)<<endl;
// cout<<Ifact(n);
// return 0;
// }





//power / exponent (m)^n
// #include<iostream>
// using namespace std;

// int power(int m, int n){
//     if(n==0)
//      return 1; 
//     return power(m,n-1)*m; 
// }

// int power1(int m, int n){
//     if(n==0)
//      return 1; 
//     if(n%2==0)
//         return power1(m*m, n/2);
//     else
//         return m*power(m*m,(n-1)/2);
// }

// int main(){
// cout<<power(2,9)<<endl;
// cout<<power1(2,8);
// return 0;
// }





//Taylor Series e^x
#include<iostream>
using namespace std; 

int main(){

return 0;
}