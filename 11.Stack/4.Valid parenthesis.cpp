#include<bits/stdc++.h>
using namespace std;
bool matching(char a, char b )                                        //this is a matching function ust to see is the brackets matching or not
{
    return((a=='('&& b==')')||(a=='{' && b=='}')||(a=='['&&b==']'));
}
bool isbalanced(string &str)               //here we used & to work on copy of our string
{
    stack<char> s;
    for(char x:str)
    {
        if(x=='('||x=='{'||x=='[')  //if opening brackets we push them in stack
        {
            s.push(x);
        }
        else{
            if(s.empty()==true)       //if we have aclosing bracket left and stack is empty
            return false;
            else if(matching(s.top(),x)==false)//if opening and closongs bracket dont match
            {
                return false;
            }
            else{                            //if they match we pop top
                s.pop();
            }
        }
    }
    return (s.empty()==true);
}
int main()
{
    string str = "{()}[]"; 
    
    if (isbalanced(str)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 

    return 0; 
}

