#include<bits/stdc++.h>//we use a circular array to implement queue
using namespace std;
struct Queue
{
    int *arr;
    int front,cap,size;
    Queue(int c)
    {
       arr=new int[c];
       cap=c;
       front =0;
       size=0;
    }
    bool isfull()
    {
        return (cap==size); 
    }
    bool isempty()
    {
        return (size==0);
    }
    int getfront()
    {
        if(isempty())
        {
            return -1;
        }
        else{return front;}
    }
    int getrear()
    {
        if(isempty())return -1;
        else{
            return (front+size-1)%cap;
        }
    }
    void enque(int x)
    {
        if(isfull())return;
        int rear=getrear();
        rear =(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    void deque()
    {
        if(isempty())return;
        front =(front+1)%cap;
        size--;
    }
};
int main()
{
  Queue q(3);

}