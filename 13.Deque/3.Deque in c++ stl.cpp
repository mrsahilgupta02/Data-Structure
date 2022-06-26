#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq={10,15,30,5,12};
    auto it=dq.begin();
    //it++;
    dq.insert(it,20);
    for(auto it:dq)
    {
        cout<<it<<" ";
    }
    dq.pop_front();
    dq.pop_back();
    cout<<dq.size()<<endl;
    
    return 0;

}