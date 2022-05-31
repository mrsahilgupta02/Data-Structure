#include<bits/stdc++.h>//for every day we have to find for how many days before(include that day) it stock has lower vslue than it
using namespace std;
void printspan(int arr[],int n)
{
    for(int i=0;i<n;i++)   //iterate in array
    {
        int span =1;                           //for every loop we set span as 1
        for(int j=i-1;j>=0 && arr[j]<=arr[i];j--) //we check previous elements using this loop
        {
            span++;
        }
        cout<<span<<" ";
    }
}

void efficient(int arr[],int n)  //idea is that span for a day is (index of current day - index of closesat graeter element on left side)
{
    stack<int> s;             //creating a stack
    s.push(0);                //pushing 0 as index of first element is always 0
    cout<<1<<" ";             //span for first day is must be 1 
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]<=arr[i])//if curr day rate is greater then top then poptha out
        {                //stack should be arranged like that at bottom of top index of element greater then it should be exist
            s.pop();
        }
        int span=s.empty()?i+1:i-s.top();  //if stack is empty for curr element then span must be(ind of curr element +1)
        cout<<span<<" ";//if stack is not eempty then span =(index of curr-op of stack) because top has it left side closest greater value index
        s.push(i);      //push that element to process remaining element becuse it can be closest greater element for next element of it
    }
}
int main()
    { 
        int arr[]={18,12,13,14,11,16};
    int n=6;
    efficient(arr,n);
    //printspan(arr,n);
    return 0; 

    }

    //here time complexity of efficient metho is 0(n) because push is performrd n times and pop is performed n times only 

