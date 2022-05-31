#include<bits/stdc++.h>
using namespace std;
void printfreq(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;                        //check if seen before
        for(int j=0;j<i;j++)
          if(arr[i]==arr[j]){flag=true;break;}

        if(flag==true)                           //if seen then ignore it
           continue;

        int freq=1;                              //if not seen before than count frequency
        for(int j=i+1;j<n;j++)
             if(arr[i]==arr[j])
               freq++;
        cout<<arr[i]<<" "<<freq<<endl;          
    }
}

int efficientcountfrequency(int arr[],int n)
{
    unordered_map<int,int> h;
    for(int i=0;i<n;i++)
    {
        h[arr[i]]++;
    }
    for(auto x:h)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}
int main()
{
    int arr[]={10,10,20,40,30,50,50,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    efficientcountfrequency(arr,n);
}