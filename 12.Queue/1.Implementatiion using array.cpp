#include<bits/stdc++.h>
using namespace std;
struct Queue
{
  int size,cap;
  int *arr;
  Queue(int c)             //this is constructor it means it gets called automatically when you declare this in main function 
  {
      cap=c;
      size=0;
      arr= new int[cap]; //we are making a dyanamically allocated array by using this(it meansit get stord in heap)
  }
  bool isfull()
  {return (size==cap);}
  bool isempty()
  {return (size==0);}
  void enque(int x)
  {
      if(isfull())
       return ;
      arr[size]=x;
      size++; 
      
  }
  void deque()
  {
      if(isempty())return ;
      for(int i=0;i<size-1;i++)
      {
          arr[i]==arr[i+1];
      } 
      size--;

  }
  int getfront()
  {
      if(isempty())
       return -1;
      else{
          return 0;
      } 
  }
  int getrear()
  {
      if(isempty())
       return -1;
      else
      {
          return size-1;
      } 
  }


};
int main()
{
    Queue q(5);
    q.enque(2);
    q.deque();
}