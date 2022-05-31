#include<bits/stdc++.h>
using namespace std;
 int trap(vector<int>& a) {
        int n=a.size();
        int lmax=0,rmax=0,res=0;//setting all the initial values 
        int l=0,r=n-1;
        
        while(l<=r)//l started from first element and r from last we will swap them when they crosses each other
        {                                  
            if(a[l]<=a[r])              //min of lmax and rmax is defined by this statement
            {
                if(a[l]>=lmax)lmax=a[l];//if element is greater than lmax then we state lmax as that element.
                else
                {
                    res=res+(lmax-a[l]);
                }
                l++;
            }
            else
            {
                if(a[r]>=rmax)rmax=a[r];
                else
                {
                    res+=(rmax-a[r]);
                }
                r--;
            }
        }
        return res;
    }
    int main()
    {
        vector<int> A{0,1,0,2,1,0,1,3,2,1,2,1};
        cout<<trap(A);
    }