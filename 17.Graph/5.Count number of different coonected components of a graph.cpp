#include<bits/stdc++.h>   //
using namespace std;

void BFS(vector<int>adj[],int s, bool visited[])
{
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u])
        {
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v);
            }
        }
    }

}

void BFSDIN(vector<int>adj[],int v) //here we make every elemet as source beacuse we dont have a source,all call BFS for every elemnet 
{
    int count=0;                      //number of diff components in grap is same number how many time BFS function get called
    bool visited[v+1];
    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            BFS(adj,i,visited);
            count++;
        }
    }
    cout<<endl;
    cout<<count;
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}



int main() 
{ 
	int V=7;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,4,6);

	
	BFSDIN(adj,V); 

	return 0; 
} 