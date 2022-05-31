#include<bits/stdc++.h>
using namespace std;
int getmaxarea(int arr[],int n) //i assume curr br as the smallest bar and we calculate area and return maximum of it
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int curr=arr[i];
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>=arr[i])
            {
                curr+=arr[i];//we are adiing arr[i]
            }
            else{
                break;
            }
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>=arr[i])
            {
                curr+=arr[i];
            }
            else{
                break;
            }
        }
        res=max(res,curr);
    }
    return  res;
}



int getMaxArea(int arr[],int n){             //Better solution
    int res=0;
    int ps[n],ns[n];
    
    stack <int> s;                                        //these lines of code are used to find previous closest smaller element
    s.push(0);
    for(int i=0;i<n;i++){
        while(s.empty()==false && arr[s.top()]>=arr[i])
            s.pop();
        int pse=s.empty()?-1:s.top();
        ps[i]=pse;                                       //we store all pse in array ps
        s.push(i);
    }
    //till here pse
     while(s.empty()==false){                             //making stack clear for further work 
        s.pop();
    }
    //these lines of code are used to find next closest smaller element
    s.push(n-1);
    for(int i=n-1;i>0;i--){
        while(s.empty()==false && arr[s.top()]>=arr[i])
            s.pop();
        int nse=s.empty()?n:s.top();
        ns[i]=nse;                                         //we store all nse in array ns
        s.push(i);
    }
    //till here
    for(int i=0;i<n;i++){                           //this is for getting area by using ps and ns
        int curr=arr[i];
        curr+=(i-ps[i]-1)*arr[i];
        curr+=(ns[i]-i-1)*arr[i];
        res=max(res,curr);
    }
    return res;
    
}




int getMaxAreaEFFICIENT(int arr[],int n){               //here we use the idea that that the element which is at just below of top is the previous lower eleent
    stack <int> s;                                      //and the item because of which top getting popped is next lower of the top
    int res=0;
    int tp;
    int curr;
    
    for(int i=0;i<n;i++){
        while(s.empty()==false && arr[s.top()]>=arr[i])
        {
            tp=s.top();
            s.pop();
            curr=arr[tp]* (s.empty() ? i : i - s.top() - 1);    //we multiply arr[tp ] as we assume the curr val as lowest in array
            res=max(res,curr);                                  //if stack get empty it means no lower val on right side so the index got multiplied with arr[tp]
        }                                                       //other wise s.top is the lower left side value
        s.push(i);
    }
    while(s.empty()==false){                                     //this code is for the element which got left i stack or we can say that the elements which dont have 
        tp=s.top();s.pop();                                      //next smaller on right side
        curr=arr[tp]* (s.empty() ? n : n - s.top() - 1);
        res=max(res,curr);
    }
    
    return res;
    
}






int main() 
{ 
    int arr[]={6,2,5,4,1,5,6};
    int n=7;
    cout<<"Maximum Area: "<<getMaxArea(arr,n);
    return 0; 
}
