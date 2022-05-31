#include<bits/stdc++.h> //in this problem we have  to design our stack as we have a getmin function by which we can find min value of a stack  
using namespace std;

struct mystack 
{
   stack<int>ms;            //idea is to maintain a auxilarry array along with main array
   stack<int>as;            //we maintain curr min of stack at the top of auxlarry 
   void push(int x)
   {
       if(ms.empty())
       {
           ms.push(x);
           as.push(x);
           return;
       }
       ms.push(x);
       if(as.top()>=ms.top())      //here we use >= because if new val is = to min we have to again push it inaux array because if later on it ge popped get in generate incorrect answer
        as.push(x); 
   }
   void pop()
   {
       if(ms.top()==as.top())
       {
           as.pop();
       }
       ms.pop();
   }
   int top()
   {
       return ms.top();
   }
   int getmin()
   {
       return as.top();
   }
};
int main()
{
    mystack s;
    s.push(3);
    s.push(4);
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop();
 
    cout<<" Minimum Element from Stack: " <<s.getmin();
  
    return 0; 
}