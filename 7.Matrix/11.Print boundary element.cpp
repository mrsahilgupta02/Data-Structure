#include<bits/stdc++.h>
using namespace std;
const int R=4;
const int C=3;
void btraversal(int mat[R][C])
{
    if(R==1)                        //if there is only 1 row than just print it
    {
        for(int i=0;i<C;i++)
        {
            cout<<mat[0][i]<<" ";
        }
    }
    if(C==1)                        //if there is only 1 column than just print it
    {
        for(int i=0;i<R;i++)
        {
            cout<<mat[i][0]<<" ";
        }

    }
    else                             
    {
        for(int i=0;i<C;i++)             //in this case you hae to first print ist row
        {
            cout<<mat[0][i]<<" ";
        }
        for(int i=1;i<R;i++)             //then print last column except ist element because its already taken in ist row so  we take(i=1)
        {
            cout<<mat[i][C-1]<<" ";
        }
        for(int i=C-2;i>=0;i--)          //then print last row except last element 
        {
            cout<<mat[R-1][i]<<" ";
        }
        for(int i=R-2;i>=1;i--)          //then print ist colums except the last and first and column
        {
            cout<<mat[i][0]<<" ";
        }
    }
}
int main()
{
    int arr[R][C]={{1,2,3},
                    {4,5,6},
                    {7,8,9},
                    {10,11,12}};
    btraversal(arr);                
}