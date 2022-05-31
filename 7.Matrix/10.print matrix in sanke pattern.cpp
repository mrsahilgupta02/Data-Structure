#include<bits/stdc++.h>
using namespace std;
const int R = 4;
const int C = 3;
void printsnake(int mat[R][C])
{
    for(int i=0;i<R;i++)
    {
        if(i%2==0)                          //as we want to print matrix in sankeform so ist row line wise ans 2nd reverse and so on
        {                                   //so if row is 0,2,4....then we print in line otherwise in reverse order
            for(int j=0;j<C;j++)
                cout<<mat[i][j]<<" ";
        }
        else{
            for(int j=C-1;j>=0;j--)
                cout<<mat[i][j]<<" ";
        }
    }

}
int main()
{
    int arr[R][C]={{1,2,3},
                    {4,5,6},
                    {7,8,9},
                    {10,11,12}};
    printsnake(arr);

}