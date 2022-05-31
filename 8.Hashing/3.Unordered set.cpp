#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(7);
    s.insert(15);
    if(s.find(15)==s.end())
            cout<<"not found";
    else{
        cout<<"found"<<" "<<*(s.find(15))<<endl;
    }
    if(s.count(9))                //count function  return 0 or 1
        cout<<"found";
    else{
        cout<<"not found"<<endl;
    }    


    s.erase(15);                   //it erases the value from the set
    cout<<s.size()<<endl;

    s.erase(s.begin() ,s.end());   //this function clears the value from begin to end
    cout<<s.size();

    //for(auto it=s.begin();it!=s.end();it++)//this is for iteration in set
      //       cout<<(*it)<<" ";
    //cout<<endl;
    //cout<<s.size()<<" ";
    //s.clear();         //this function clears the set
    //cout<<s.size();
    //for(int x: s)
      //  cout<<x<<" ";

    
    
    
    return 0;    
}