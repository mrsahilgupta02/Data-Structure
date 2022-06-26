#include<bits/stdc++.h>   // we have to find the olny nu which is occuring odd time inthe array
using namespace std;
int findOdd(int arr[],int n){
    int res =0;
    for (int i=0;i<n;i++){
        res =res^arr[i];
    }
    cout<<res;
    return 0;
}
int main(){
    int arr[]={3,4,5,5,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    findOdd(arr,n);
}