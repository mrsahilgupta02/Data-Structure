//we have to print previous closet greater element for every nu in an array 
#include<bits/stdc++.h>//if there is no greater elementon left then print -1 for that element
using namespace std;
void printPrevGreater(int arr[],int n){//naive method
    
    for(int i=0;i<n;i++){
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1)
            cout<<-1<<" ";
    }
}



void efficient(int arr[],int n)//this approach is same as stock span problem
{                              //in that problem we are dealing with index but here we are dealing with value
    stack<int> s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && s.top()<=arr[i])
        {
            s.pop();
        }
        int x=(s.empty())? -1:s.top();
        cout<<x<<" ";
        s.push(arr[i]);
    }
}




int main() 
{ 
    int arr[]={20,30,10,5,15};
    int n=5;
    efficient(arr,n);
    return 0; 
}