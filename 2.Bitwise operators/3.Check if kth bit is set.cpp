#include<bits/stdc++.h>      //we have to check if the kth bit from right of number n is 1 or not
using namespace std;
void find(int n ,int k){
    if(n &(1 << (k-1))!=0){   //left shift
        cout<<"yes";
    }
    else{
        cout<<"Nope";
    }
}

void find2(int n, int k){//right shift
    if((n>>(k-1))& 1 ==1){
        cout<<"yes";
    }
    else{
        cout<<"Nope";
    }
}

int main(){
    find2(2,2);
}