 #include<bits/stdc++.h>
 using namespace std;
 void intersection(int a[],int b[],int m,int n) //naive approach
 {
     for(int i=0;i<m;i++)                          //traverse through both arrays
     {                                             
         if(i>0 && a[i]==a[i-1])                   //this condition is for avoiding double appearance of elements in a array
         continue;
         for(int j=0;j<n;j++)
         {
             if(a[i]==b[j])                     //if element is in both arrays print it
             {
                 cout<<a[i]<<" ";
                 break;
             }
         }
     }

 }
 void efficient(int a[],int b[],int m,int n)
 {
     int i=0,j=0;
     while(i<m&&j<n)
     {
         if(i>0&&a[i-1]==a[i])
         {i++;continue;}
         if(a[i]<b[j]){i++;}             //there is comparison
         else if(a[i]>b[j]){j++;}
         else{cout<<a[i]<<" ";i++;j++;}//if both are equal print and increase values by 1
     }
 }
 int main()
 {
     int a[]={1,4,7,7,9};
     int b[]={3,4,7,8,10};
     efficient(a,b,5,5);
    // intersection(a,b,5,5);
     
 }