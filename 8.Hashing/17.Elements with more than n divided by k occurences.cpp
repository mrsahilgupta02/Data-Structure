#include<bits/stdc++.h>//we have to find the elements in array which have occured more than n/k times
using namespace std;
void printNByK(int arr[], int n, int k)
{
    sort(arr,arr+n);                    //sort the array
    int i=1,count=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            count++;
            i++;
        }
        if(count>n/k)
            cout<<arr[i-1]<<" ";
        count=1;
        i++;
    }
    
}
 void efficient(int arr[],int n,int k)
 {
     unordered_map<int,int>m;//put the array in map
     for(int i=0;i<n;i++)
     {
         m[arr[i]]++;
     }
     for(auto x: m)//see if there freq is more than n/k or not
     {
         if(x.second>n/k)
         {
             cout<<x.first<<" ";
         }
     }
 }

int main()
{
    int arr[] = {10, 10, 20, 30, 20, 10,10};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;
    efficient(arr, n, k);
}