#include<bits/stdc++.h>//we have to find count of distinct elements in every  window of k elements  in array
using namespace std;
void printDistinct(int arr[], int n, int k)
{
    for(int i=0;i<=n-k;i++){         //this loop is to traverse ina array from o to n-k
        int count=0;
        for(int j=0;j<k;j++){          //this loop is to traverse in the window
            bool flag=false;
            for(int p=0;p<j;p++){      //this loop is here to check if this element is seen before or not
                if(arr[i+j]==arr[i+p])
                {
                    flag=true;break;//if the element is seen before than we set flag=true 
                }
            }
            if(flag==false)count++;//now if flag is true ten we knowthat this value is not previously present so we increment count
            
        }
        cout<<count<<" ";
    }
}

void efficient(int arr[],int n,int k)
{
    map<int,int>m;
    
    for(int i=0;i<k;i++) //we put first k elements of array in the map 
    {
        m[arr[i]]+=1;    //just incresaing their freq
    }

    cout<<m.size()<<" ";//print the size

    

    for(int i=k;i<n;i++)//then  WE run a loop from i=k
    {
        m[arr[i-k]] -= 1;//we decrease freq of firat element
        
        if(m[arr[i-k]]==0)//if its freq become zero delete it
        {
            m.erase(arr[i-k]);
        }
        m[arr[i]] +=1;//if the curelement is not present in map inset it

        cout<<m.size()<<" ";

    }

} 




int main()
{
    int arr[] = {10, 10, 5, 3, 20, 5};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    efficient(arr, n, k);
}