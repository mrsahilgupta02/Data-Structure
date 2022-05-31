#include<bits/stdc++.h>
using namespace std;
const int r=4,c=4;
void search(int mat[r][c],int x)
{
    int i=0,j=c-1;     //we have taken a right uppermost elememt in matrix so that if required nu is greater than that number or not
    while(i<r && j>=0)
    {
        if(mat[i][j]==x)
        {
            cout<<"found at ("<<i<<" "<<j<<")";
            
            return ;              //it is for a exit condition
        }
        else if(mat[i][j]>x)     //we will step left in row in this condition
        {
            j--;
        }
        else {                  //step down in column
            i++;
        }

    }
    cout<<"not found";
}
int main()
{	
    int arr[][c] = {{10, 20, 30, 40},
    			   {15, 25, 35, 45},
    			   {27, 29, 35, 45},
    			   {32, 33, 39, 50}};
			   
	int x = 29;	   

	search(arr, x);

	return 0;
}