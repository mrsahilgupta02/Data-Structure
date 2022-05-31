#include <bits/stdc++.h>
using namespace std;

struct MyStack {
 
    stack<int> s;
    int min;
 
void push(int x) {  //this works on idea that if new element is getting pushed which is smaller then curr min then  we push (x-min) instead of x
 
      if(s.empty() ) {
         min=x;
         s.push(x);
      }
      else if(x<=min){
          s.push(x-min);
          min=x;//and initialize min as x
      }else{
      s.push(x);
      }
   }
 
int pop() {

    int t=s.top();s.pop();
    if(t<=0){
        int res=min;//at time of popping if we see that stack.top is a special character then we knew that its not the real value
        min=min-t;  //its tje min value so we pop that out and update min as (min -special charactern)
        return res;
    }else{
        return t;
    }
   }

int top() {
    int t=s.top();
    return ((t<=0)? min : t);
   }
 
int getMin() {
      return min;
   }
};

int main()
{
    MyStack s;
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop();
 
    cout<<" Minimum Element from Stack: " <<s.getMin();
  
    return 0; 
}
