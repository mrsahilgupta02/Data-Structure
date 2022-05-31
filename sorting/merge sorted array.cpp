#include<bits/stdc++.h>
using namespace std;
void mergesortedarray(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && i<n)
    {
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else
        {cout<<b[j]<<" ";
        j++;
        }
    }
    while(i<m)           //these are cases when element got left either in aray a or b 
    {                    // left elements means if there are too many elements than anothe one
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m)
    {
        cout<<b[j]<<" ";
        j++;
    }
}
int main()
{
    int A[]={1,5,9,11};
    int B[]={2,3,8,13};
    mergesortedarray(A,B,4,4);
}