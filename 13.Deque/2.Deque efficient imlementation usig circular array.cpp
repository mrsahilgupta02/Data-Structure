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
        front=0;
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
       front=(front+cap-1)%cap;
        arr[front]=x;
        size++;
    }
    void deletefront()
    {
        if(isempty())return;
        front=(front+1)%cap;
        size--;
    }
    int getfront()
    {
        if(isempty())return -1;
        else return front;
    }
    void insertrear(int x)
    {
        if(isfull())return ;
        int new_rear=(front+size)%cap;
        arr[new_rear]=x;
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
        else return (front+size-1)%cap;
    }
};
int main()
{
    Deque d(5);
    

}