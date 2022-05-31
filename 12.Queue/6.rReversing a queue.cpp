#include<bits/stdc++.h>
using namespace std;
void reverse(queue<int> &q) //iterative method
{
    stack<int>s;
    while(q.empty()==false)
    {
        s.push(q.front());
        q.pop();
    }
    while(s.empty()==false)
    {
        q.push(s.top());
        s.pop();
    }
}
void recursivereverse(queue<int>&q)
{
    if(q.empty())
     return;
    int x=q.front();
    q.pop();
     recursivereverse(q);
       q.push(x);
}
void print(queue<int> &q)
{
   while(q.empty()==false)
   {
       cout<<q.front()<<" ";
       q.pop();
      
   }
}
int main()
{ 
    queue<int>q;
    q.push(5);
    q.push(3);
    reverse(q);
    print(q);

}