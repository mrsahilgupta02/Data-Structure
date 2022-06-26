#include<bits/stdc++.h>  //in this problem we have to find all the nubers which are prime and less than given number n
using namespace std;
 void sieve(int n){
     vector<bool>isPrime(n+1 ,true);
     for(int i=2;i*i<=n;i++){
         if(isPrime[i]){
             for(int j=i*i;j<=n;j=j+i){
                 isPrime[j]=false;
             }
         }
     }
     for (int i=2;i<=n;i++){
         if(isPrime[i]){
             cout<<i<<" "; 
         }
     }
 }

 int main(){
     int n= 19;
     sieve(n);
 }