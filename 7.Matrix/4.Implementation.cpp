#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=3,n=2;
    int*arr[m];
    for(int i=0;i<m;i++)    //creation of 2d array of m*n
    {
        arr[i]=new int[n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=10;
            cout<<arr[i][j]<<" ";
        }
    }
}
