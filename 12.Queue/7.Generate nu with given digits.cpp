#include<bits/stdc++.h>//given a nu n,print n nmbers(in incresing order) such that all these nu have digits in set(5,6)
using namespace std;
void printfirstn(int n)
{
    queue<string>q;                 //it can be a big number and the result value might not fit in basic class types like long so we used string as our datatypeS
    q.push("5");
    q.push("6");
    for(int count=0;count<n;count++)
    {
        string curr=q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr+"5");
        q.push(curr+"6");      
    }
}

int main()
{
    printfirstn(10);
       
}