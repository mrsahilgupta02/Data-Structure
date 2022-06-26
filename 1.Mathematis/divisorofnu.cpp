#include<iostream>
using namespace std;
void printdivisor(int n)
{                          //this function give output in nonsorted form
	for(int i=1;i*i<=n;i++)
	if(n%i==0)
	{
		cout<<i;
		if(i!=n/i)
		cout<<n/i;
	}
}
void sortedprinting(int n)
{
	int i;
	for(i=1;i*i<=n;i++)
	if(n%i==0)
	{
		cout<< i << " ";
	}
	for( ;i>=1;i--)
	{
		if(n%i==0)
		{
			if(i!=n/i)
			cout<< n/i << " ";
		}
	}
}
int main()
{
	int n;
	cout<<"enter the value of n";
	cin>>n;
	//printdivisor(n);
	sortedprinting(n);
}
