//we have to print next closet greater element for every nu in an array 
#include<bits/stdc++.h>//if there is no greater elementon right then print -1 for that element
using namespace std;
void nextGreater(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==n)
            cout<<-1<<" ";
    }
}
vector<int> efficient(int arr[],int n){  //it is a vector type function means it return vector
                                         //we are doing the same thing which we have done in previous closest but ere we are traversing from right side
    vector<int> v;                      //vector is used aswe  are doing in reverse so at last we have to reverse the result
    stack<int>s;
    s.push(arr[n-1]); v.push_back(-1);
    for(int i=n-2;i>=0;i--){
        while(s.empty()==false && s.top()<=arr[i])
            s.pop();
        int ng=s.empty()?-1:s.top();
        v.push_back(ng);
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());          //here we reverse our output
    return v;
}

int main() 
{ 
    int arr[]={5,15,10,8,6,12,9,18};
    int n=8;
    //nextGreater(arr,n);
    vector<int> a=efficient(arr,n);  //we save out output vector  from function in  vector a  
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0; 
}
