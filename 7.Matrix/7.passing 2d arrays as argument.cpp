#include<bits/stdc++.h>
using namespace std;
void print (int mat[][2],int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
              cout<<mat[i][j]<<" ";
        }
    }
}
 const int r=3;
 const int c=2;
void print1 (int mat[r][c])
{
    for(int i=0;i<r;i++)
    
    {
        for(int j=0;j<c;j++)
        {
              cout<<mat[i][j]<<" ";
        }
    }
}

int main()
{
    int mat[3][2]={{10,2 },{30,40},{50,60}};
    print1(mat);
}