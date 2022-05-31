#include<bits/stdc++.h>
using namespace std;
struct Myhash
{
   int *arr;
   int cap,size;
   
    Myhash(int c) // size of the has is c
   {
    cap=c;
    size=0;
    arr=new int[cap];
    for(int i=0;i<cap;i++)
    {
        arr[i]=-1;
    }
   }
   int hash(int key)     //it is hash function of hashing
   {
       return key%cap;
   }

   bool insert(int key)
   {
       if(size==cap)
       return false;
       int i=hash(key);
       while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)     //3 conditions to stop
       {
           i=(i+1)%cap;             //%cap is used for circular traversal
       }
       if(arr[i]==key)              //it return false because after traversing it returned to sae value where it started
         return false;
       else{
           arr[i]=key;
           size++;
           return true;
       }  
   }
   bool search(int key)
   {
       int h=hash(key);
       int i=h;
       while(arr[i]!=-1)
       {
           if(arr[i]==key)
            return true;
           i=(i+1)%cap;
           if(i==h)
           return false; 
       }
       return false;
   }
   bool erase(int key)
    {   
        int h=hash(key);
        int i=h;
        while(arr[i]!=-1){
            if(arr[i]==key){
                arr[i]=-2;
                return true;
            }
            i=(i+1)%cap;
            if(i==h)
                return false;
        }
        return false;
    }


};

int main() 
	{ 
	    Myhash mh(7);
	    mh.insert(49);
	    mh.insert(56);
	    mh.insert(72);
	    if(mh.search(56)==true)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    mh.erase(56);
	    if(mh.search(56)==true)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	} 
