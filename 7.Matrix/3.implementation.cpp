#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=3,n=2;
    int**arr;//it is  a pointer of int* type , it means it means it is a pointer will point at the array of pointers
    arr=new int*[m];//this is array of pointers of sisxe m, in this array every pointer will point to array of size n 
    for(int i=0;i<m;i++)
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