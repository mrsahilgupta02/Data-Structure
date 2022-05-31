//we have given two arrays 
//ist is how much petrol you will be given from ith petrol pump
//2nd shows distance b/w current and next petrol pump   mileage is 1/1
//we have to find  first petrol pumpfrom which truck should start to compllete the tour(full circle)
#include<bits/stdc++.h>
using namespace std;

int firstcircularpump(int petrol[],int dis[],int n)
{
    for(int start=0;start<n;start++)
    {
        int curr_petrol=0;
        int end=start;
        while(true)
        {
            curr_petrol+=(petrol[end]-dis[end]);
            if(curr_petrol<0)
               break;
            end=(end+1)%n;
            if(end==start)
            return (start+1);//start +1 because we want position not index
        }
    }
    return -1;
}

int efficient(int petrol[],int dis[],int n)  //efficient solution,
{
   deque<int>dq;                            //defining queue,curr_petrol,end
   int curr_petrol=0;
    int end=0;  
   while(true)                             //while(true)means the loop will contnue until it returns something or get breakd
   { 
        if(curr_petrol>=0)                 //if curr_petrol is greater thaen 0 push its index
        {
            dq.push_back(end);
        }     
         curr_petrol+=(petrol[end]-dis[end]);//we update curr_petrol by adding diff o petrol we get AND we need to travel


        while(curr_petrol<0)                //if curr_petrol<0 pop out values from front until curr_petrol>=0  
        {
            curr_petrol-=(petrol[dq.front()]-dis[dq.front()]); //we decrease the portion of petrol pump we are popping
            if(dq.front()==(n-1)) return -1;//it isexit condition meansit has no answer ,itmeans if front of queue is n-1 &curr petrol is -ve 
                                            //or we can say we have pushed all the elements and poped them accordingly now if we takes this further only unnecesarry cycle wll repeat itself 
            dq.pop_front();
        }
        if(dq.size()==n && curr_petrol>=0)//if we have all petrol pumps in queue and curr_petrol>0 then ans is dq.front+1
        {
            return (dq.front()+1);
        }
        end=(end+1)%n;
        
   }
   return -1;
}






/*SUPER EFFICIENT*/
 int superefficient(int petrol[],int dis[],int n)//this code work on idea that if we get -ve curr_petrol at petrol pump i then 
 {                                               //(0->i)in this range there will not be the answer
     int start=0,curr_pet=0;
     int prev_pet=0;
     for(int i=0;i<n;i++)
     {
         curr_pet+=(petrol[i]-dis[i]);
         if(curr_pet<0)
         {
             start=i+1;              //as we said if we get -ve curr_petrol for ith pump then if there is a answer the t will be after i
             prev_pet+=curr_pet;     //prev_pet is the extra petrol which we need to come from oth to ith pump
             curr_pet=0;
         }
     }
     return((curr_pet+prev_pet)>0)?(start+1):-1;//at lst wew check that after coming to 0 do we have extra petrol to travel till i 
 }




int main()
{
    int petrol[]={50,20,60,30};
    int dis[]={30,50,20,10};
    cout<<superefficient(petrol,dis,4);
}