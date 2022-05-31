#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>m;
    m.insert({10,200});
    m[5]=100;
    m.insert({3,300});
    m.at(10)=500;//it we use m[10]  then 10 get stored in map with 0 value no negotiate that problem we use m.at 

    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    m.clear();
    cout<<"size :"<<m.size()<<endl;
    cout<<"empty"<<(m.empty()?"yes":"no")<<endl;
    return 0;
}