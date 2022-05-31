#include<bits/stdc++.h>
using namespace std;
bool ispal (string &str)
{
   string rev=str;
   reverse(rev.begin(),rev.end());;
   return(rev==str);
}

bool efficient(string&str)
{
    int begin=0;
    int end=str.length()-1;
    while(begin<end)
    {
        if(str[begin]<str[end])
        {
            return false;
            begin++;
            end--;
        }
    }
    return true;
}
int main()
{
    string s ="ABCBA";
    cout << s << endl;
    cout<<ispal(s);
}
