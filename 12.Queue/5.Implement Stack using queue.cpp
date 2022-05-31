#include<bits/stdc++.h>
using namespace std;
struct stack
{
    queue<int> q1,q2;
    int top()
    {
        return q1.front();
    }
    int size(){ return q1.size();}
    int pop()
    {
        return q1.front();
    }
    void push(int x)
    {
        while(q1.empty()==false)//we just empty the queue in which we want to push x and store the popped values in a new  stack
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);//we push x in queue 1
        while(q2.empty()==false)//then againpush lements of q2 in q1
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
};