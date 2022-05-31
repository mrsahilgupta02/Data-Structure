#include<bits/stdc++.h>//you are given anan array you have to find maximum nu of items you can buy
using namespace std;

int main() 
{ 
    int n=5;
    int cost[n]={1,12,5,111,200};
    int sum=10;
    
    int res=0;
    sort(cost,cost+n);
    for(int i=0;i<n;i++){
        if(cost[i]<=sum){
            sum-=cost[i];
            res++;
        }else{
            break;
        }
    }
    cout<<res;
    return 0;
} 
