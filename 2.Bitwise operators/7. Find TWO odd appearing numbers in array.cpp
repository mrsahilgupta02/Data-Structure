#include<bits/stdc++.h>                  //we have to find two odd occuring numbers in array
using namespace std;

void oddAppear(int arr[],int n){
   int xors = 0,res1=0,res2=0;
   for(int i=0;i<n;i++){                 //we first xor the full array and get final result of (xor of two nu tat are odd occuring)
          xors = xors^arr[i];
   }
  int sn = xors & (~(xors-1));           //we have to find the last bit to find in array

   for(int i=0;i<n;i++){
       if((arr[i] & sn)!=0){              //this condion is for if nu have the bit we find in sn
           res1=res1^arr[i];
       }
       else{                              
           res2= res2^ arr[i];
       }
   }
   cout<<res1<<" "<<res2;
}



int main(){
  int arr[] ={3,4,3,4,8,4,4,32,7,7};
  oddAppear(arr,10);
}
