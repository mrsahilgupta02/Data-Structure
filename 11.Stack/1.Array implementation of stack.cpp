#include<bits/stdc++.h>
using namespace std;
struct mystack   //we make a struct of mystack 
{
    int *arr;  //here we just defined a pointer
    int cap;
    int top;
    mystack(int c)          //it is a constuctor which defines stack
    {
         cap=c;
         arr=new int[cap];  //here we initialized a dynamic array its starting has arr pointer
         top=-1;
    }
    void push(int x)
    {
        top++;
        arr[top]=x;
    }
    int pop()
    {
        int res=arr[top];
        top--;
        cout<<res<<endl;
        return 0;
    }
    int peek()
    {
        cout<<arr[top]<<endl;
        return 0;
    }
    int size()
    {
        cout<<top+1<<endl;
        return 0;
    }
    bool isempty()
    {
        if(top==-1)
         cout<<true;
        else{
            cout<<false;
        }
        return 0;
    }

};
int main()
{
    mystack s(8);
    s.push(5);
    s.push(4);
    s.size();
    s.pop();
    s.size();
    s.peek();
}