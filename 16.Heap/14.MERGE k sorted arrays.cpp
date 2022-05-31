#include<bits/stdc++.h>//you are given ac2d array of k arrays you have to make a single  sorted array by usig their element 
using namespace std;

struct triplet                          //we made datatype of our own
                                        //as we want to push root->val,row index,column index
{
    int val,vpos,opos;
    triplet(int v,int op,int vp)
    {
        val=v;
        vpos=vp;
        opos=op;
    }
};

struct mycmp                                //this is a comporator function to make minheap
{
    bool operator()(triplet &t1,triplet &t2)
    {
        return t1.val>t2.val;
    }
};


vector<int>mergeArr(vector<vector<int>> & arr)
{
    vector<int>res;
    priority_queue<triplet,vector<triplet>,mycmp>pq;
    for(int i=0;i<arr.size();i++)                //we push first element of every k arrays
    {
        pq.push({arr[i][0],i,0});
    }
    while(pq.empty()==false)                    //this llop wil work until pq became empty     o{nklog(k)}
    {                                  
        triplet curr=pq.top();                     
        pq.pop();                                //we pop min out of it
        res.push_back(curr.val);                //nd push that mininmum value in res vector
        int op=curr.opos,vp=curr.vpos;           //we see indexes of that value
        if(vp+1<arr[op].size())                  //we see are there more elements present in the row from which we pop minimum
        {                                        //if yes then push the next item in priority queue
            triplet t(arr[op][vp+1],op,vp+1);
            pq.push(t);
        }

    }
    return res;
}
int main()
{
    vector<vector<int>>v[[3,4,1,7],[2,6,90],[8,34,5]];
    mergeArr(v);

}