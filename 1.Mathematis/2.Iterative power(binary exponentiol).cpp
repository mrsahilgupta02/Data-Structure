#include<bits/stdc++.h>  // we have to find x ki power n;
using namespace std;
void power(int x, int n){
    int res=1;
    while(n>0)
    {
        if(n%2!=0){  //condition if n is odd as binary bit will have 1 in last
            res=res*x;
            
        }
        x=x*x;
            n=n/2;
    }
    cout<<res;
}
int main(){
    power(4,5);
}