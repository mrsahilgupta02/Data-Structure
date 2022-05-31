#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
struct point
{
    int x,y;
};
bool mycmp(point p1,point p2)
{
    return(p1.x<p2.x);
}
int main()
{
    //int arr[]={10,20,5,7};
    //sort(arr,arr+4);
    //for(int x: arr)
    //cout<<x<<" ";
    //cout << endl;
    //sort(arr,arr+4,greater<int>());
    //for(int x: arr)
   // cout<<x<<" ";
   vector<int> v={5,7,2,10};
   sort(v.begin(),v.end());
   for(int x:v)
   cout<<x<<" ";
   cout<<endl;
   sort(v.begin(),v.end(),greater<int>());
   for(int x:v)
   cout<<x<<" ";

   point arr[]={{3,10},{2,8},{5,4}};
   cout<<endl;
   sort(arr,arr+3,mycmp);
   for(auto i: arr)
   cout<<i.x<<" "<<i.y<<endl;

}
