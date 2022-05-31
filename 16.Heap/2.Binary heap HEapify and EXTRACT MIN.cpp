#include<bits/stdc++.h>          //BINARY HEAP IS A COMPLETE BINARY TREE  (STORED AS AN ARRAY)
using namespace std;
class MinHeap
{
   int *arr;
   int size;
   int capacity;

   public:

   MinHeap(int c)
   {
       size=0;
       capacity=c;
       arr= new int[c];
   }
  int left(int i){return (2*i+1);}
  int right(int i){return (2*i+2);}
  int parent(int i){return (i-2)/2;}

  void insert(int x)                  //we insert x at the last of the arr
  {
      if(size==capacity)return;       //if array is full the return
      size++;
      arr[size-1]=x;                  //put at last
      for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];)  //if it is smaller then its parent swp it with parent
      {
          swap(arr[i],arr[parent(i)]);
          i=parent(i);                     //now make i the parnet(i)
      }
  }

  void MinHeapify(int i)   //function to convert a corrupt minheap ito coorect minheap 
  {
      int lt=left(i);
      int rt=right(i);
      int smallest=i;
      if(lt<size && arr[lt]<arr[i])
      {
          smallest=lt;
      }
      if(rt<size && arr[rt]<arr[smallest])
      {
          smallest=rt;
      }                      //till here we find the smallest between root ,left and right make the smallest root
      if(smallest!=i)
      {
          swap(arr[i],arr[smallest]);
          MinHeapify(smallest);   //now again clling minheapify for retof tree
      }
  }


  

  int extractmin()//it is the function to print the min value of heap and delete it from minHeap
  {
      if(size==0)return INT_MAX;
      if(size==1)
      {
          size--;
          return arr[0];
      }

      swap(arr[0],arr[size-1]);  //we swap first and last elements
      size--;                     //then delete the last element
      MinHeapify(0);              //then call heapify for tree
      return arr[size];
  }



  
  void show()
  {
      for(int i=0;i<size;i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<endl;
  }

};

int main() 
{ 
    MinHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.insert(15);
    h.insert(20);
    h.show();
    cout << h.extractmin() << " ";
    cout<<endl;
    h.show();
    return 0;
} 
