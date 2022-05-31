#include<bits/stdc++.h>
using namespace std;
struct Myhash
{
    int bucket;
    list<int> *table;
    Myhash(int b)
    {
        bucket=b;
        table= new list<int>[bucket];
    }
    void insert(int k)
    {
        int i=k % bucket;
        table[i].push_back(k);
    }
    bool search(int k)
    {
        int i=k % bucket;
        for(auto x: table[i])
           if(x==k)
             return true;
        return false;     
    }
    void remove(int k)
    {
        int i=k % bucket;
        table[i].remove(k);
    }
};

int main()
{
    Myhash mh(7);
    mh.insert(10);
    mh.insert(27);
    mh.insert(45);
    mh.remove(7);
    cout<< mh.search(45)<<endl;
}    