#include<iostream>
using namespace std;

int main(){
   
   char A;
  register int B;
   static short int C;
   extern long int D;
    float E;
  double F;
    wchar_t G;
    A = 'T';
    B = 9.3;
    C= 4.4;
    E = 8;
    cout<<"Size of char: "<<sizeof(A)<<endl;
    cout<<"Size of int: "<<sizeof(B)<<endl;
    cout<<"Size of short int: "<<sizeof(C)<<endl;
    cout<<"Size of long int: "<<sizeof(D)<<endl;
    cout<<"Size of float: "<<sizeof(E)<<endl;
    cout<<"Size of double: "<<sizeof(F)<<endl;
    cout<<"Size of wchar_t: "<<sizeof(G)<<endl;   
}