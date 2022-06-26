#include<bits/stdc++.h>
using namespace std;
 bool ispow(int n){
     if(n==0){
         cout<<"No";
     }
     if(n>>(n-1)==0){
         cout<<"yes";
     }
     else{
         cout<<"No";
     }
     return 0;
 }

 int main(){
     ispow(32);
 }