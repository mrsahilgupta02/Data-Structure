#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    m["gfg"]=20;
    m["id"]=30;
    m["courses"]=15;
    cout<<m.size()<<endl;
    m.erase("id");
    cout<<m.size()<<endl;
    m.erase(m.begin());   //this function deletes the first element 
    cout<<m.size()<<endl;
    /* 
       if(m.find("id")!=m.end())//we find id in the map
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    if(m.count("courses")>0)  //count find how many times it appeared so if m,count is > tha 0 than it is obviously present.
        cout<<"found";
    else
    {
        cout<<"not found";
    } 

    for(auto it=m.begin();it!=m.end();it++)       //this is for traversing in the array.
    {
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }        
    */
    return 0;
}