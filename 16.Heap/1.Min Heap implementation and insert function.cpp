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

  void show()
  {
      for(int i=0;i<size;i++){
          cout << arr[i] << " ";
      }
      cout << endl;
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
    
}
