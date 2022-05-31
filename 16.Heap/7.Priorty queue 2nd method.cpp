#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={10,5,15};
    priority_queue<int>pq(arr,arr+3);   //by this metho we put all the arr in pq in 0(n) time instead of nlog(n) as build heap func take o(n) time
     while(pq.empty()==false)
     {
         cout<<pq.top()<<" ";
         pq.pop();
     }
     return 0;
}