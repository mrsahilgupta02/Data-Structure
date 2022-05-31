#include<bits/stdc++.h>//we have to find length of longest  cnsecutive subsequence means x,x+1,x+2....int the array
using namespace std;
int longestsubsequence(int arr[],int n)
{
    sort(arr,arr+n);
    int res=1,curr=1;//we have taken these values 1 because there must be i element is the subsequence so its length is 1
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]+1) curr++;//we are seeing is previous element is 1 smaller than the curr element or not

        else if(arr[i]!=arr[i-1])//it is the condition when our if condition fails but we are seeing is curr element and previous element are equal or not
        {
            res=max(res,curr);
            curr=1;                //becuase we have to start counting again for new subsequece;
        }
    }
    return res;
}

int efficient(int arr[],int n)//in this method we put all the values in unordered set so case of arr[i]==arr[i-1] got neglected
{
    unordered_set<int>h(arr,arr+n);
    int res=1;
    for(auto x:h)                 //we iterate all the values in hash set
    {
        if(h.find(x-1)==h.end())   //we see is the x is starting of subsequence or not by finding x-1 in hash set
        {
            int curr=1;
            while(h.find(x+curr)!=h.end())//so if condition is true and x is starting then we will look for further elements in h and accordingly increase res
            {
                curr++;
            }
            res=max(res,curr);
        }
    }
    return res;
}
int main()
{
    int arr[] = {1, 9, 3, 4, 2, 10, 13};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << efficient(arr, n);
}