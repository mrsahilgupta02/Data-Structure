#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>pq;   //this is a maxheap
    pq.push(10);
    pq.push(15);//every push will take log n time
    pq.push(5);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;

}