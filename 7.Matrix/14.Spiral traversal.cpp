#include<bits/stdc++.h>
using namespace std;
const int R=4,C=4;
void printspiral(int mat[4][4], int R,int C)
{
    int top=0,left=0,bottom=R-1,right=C-1;
    while(top<=bottom && left<=right)    //because we have to print in spiral not only boundary
    {
        for(int i=left;i<=right;i++)     //for top row
        {
            cout<< mat[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++)    //for rightmost column
        {
            cout<< mat[i][right]<<" ";
        }
        right--;
        if(top<=bottom)                 //for bottom row
        {
        for(int i=right;i>=left;i--)
        {
            cout<< mat[bottom][i]<<" ";
        }
        bottom--;
        }
        if(left<=right){                //for leftmost column
        for(int i=bottom;i>=top;i--)
        {
            cout<< mat[i][left]<<" ";
        }
           left++;
        }
    }
}
int main()
{	
	int arr[R][C] = {{1, 2, 3, 4},
				    {5, 6, 7, 8},
				    {9, 10, 11, 12},
				    {13, 14, 15, 16}};

  printspiral(arr, R, C);

	return 0;
}