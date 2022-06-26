#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter te values of a,b";
	cin>>a>>b;
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;
	}
	cout<<a;
	return 0;
}
