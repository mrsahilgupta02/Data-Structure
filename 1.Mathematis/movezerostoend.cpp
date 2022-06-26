#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp = a;
    a = b;
    b = temp;  
}
void movetoend(int arr[],int n) //naive approach
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[j]!=0){
					swap(arr[i],arr[j]);
					break;
				}
			}
		}
	}
}
int main()
{
	int n=5;
	int arr[]={0,2,7,9,0};
	movetoend(arr,5);
	for(int x=0;x<n;x++)
	{
		cout<<arr[x] <<" ";
	}
}

