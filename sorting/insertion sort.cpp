#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n)// we will devide our array in 2 part
{
    for(int i=1;i<n;i++)     //what we are doing in this is that we make AN array of 1 element and adding elements to it in sorted way
    {                        //i=1 is because is because i=0 the only element in j is always sorted
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;     //j+1 because we decreased the value of j in loop
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}
int main()
{
    int A[]={3,1,9,15,2};
    insertionsort(A,5);
}