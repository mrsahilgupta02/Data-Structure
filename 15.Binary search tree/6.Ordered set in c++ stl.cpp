#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *right;
    Node *left;
    Node(int k)
    {
        key=k;
        right=left=NULL;

    }
};
int main() 
{
	set<int> s;
	s.insert(10);
	s.insert(5);
	s.insert(20);
	for (int x : s)
     {
	    cout<<x<<" ";
	 }
    cout<<endl;
	
	set<int,greater<int>> s1;//Decreasing order
	s1.insert(10);
	s1.insert(5);
	s1.insert(20);
	for (auto it=s1.begin();it!=s1.end();it++) 
    {
	    cout<<(*it)<<" ";                       //as it is a pointer not a integer
	}
    cout<<endl;
    for (auto it=s1.rbegin();it!=s1.rend();it++)   //wwe can use s.rbegin it will point at last value and s.rend will point at first value of set
     {
	    cout<<(*it)<<" ";
	}cout<<endl;
    auto it=s.find(10);
	if(it==s.end())
	    cout<<"Not found"<<endl;
	else
	    cout<<"Found"<<endl;
	    
	/*s.clear();
	cout<<"Size: "<<s.size()<<endl;*/
	
    if(s.count(10))
	    cout<<"Found"<<endl;
	else
	    cout<<"Not Found"<<endl;
	    
    auto iter=s.lower_bound(5);//if element is present then lower bound will give us same value otherwise a ust bigger value
	if(iter!=s.end())
	    cout<<(*iter)<<endl;
	else
	    cout<<"Given element is greater than the largest"<<endl;
	   
	iter=s.upper_bound(5);//upper bound gives us the just bigger value then 5
	if(iter!=s.end())
	    cout<<(*iter)<<endl;
	else
	    cout<<"Given element is greater than the largest"<<endl;


	s.erase(5);
	for(int x: s)
    {
	    cout<<x<<" ";
	}
    cout<<endl;
	
	auto ite=s.find(10);
	s.erase(ite);
	for(int x: s)
    {
	    cout<<x<<" ";
	}
    cout<<endl;
	
	
	return 0;
}

//o(1)->begin ,end,rbegin,rend,cend,cbegin,size,empty
//o(logn)->inert,find,count,lower_bound,upper_bound,erase(val)
//erase(it)->o(1) 


/*
struct test                          set for user defined
{
	int x;
	bool operator< (const test &t) const
	{
       return(this->x<t->x)
	}
}


*/