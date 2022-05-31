#include<bits/stdc++.h>
using namespace std;

struct Deque
{
    int front;
    int rear;
    int *arr;
    int cap;
    int size;
    Deque(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
    }
    bool isfull()
    {
        return (size==cap);
    }
    bool isempty()
    {
        return (size==0);
    }
    void insertfront(int x)
    {
        if(isfull())return;
        for(int i=size-1;i>=0;i--)
        {
            arr[i+1]==arr[i];
        }
        arr[0]=x;
        size++;
    }
    void deletefront()
    {
        if(isempty())return;
        for(int i=0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }
    int getfront()
    {
        if(isempty())return -1;
        else return 0;
    }
    void insertrear(int x)
    {
        if(isfull())return ;
        arr[size]=x;
        size++;
    }
    void deleterear()
    {
        if(isempty())return;
        size--;
    }
    int getrear()
    {
        if(isempty())return -1;
        else return size-1;
    }
};
int main()
{
    Deque d(5);
    

}