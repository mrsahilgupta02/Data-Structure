#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
int *arr;
int size;
int capacity;

public:
MinHeap(int c)
{
    capacity=c;
    size=0;
    arr=new int[c];
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


  void Minheapify(int i)
  {
      int lt= left(i);
      int rt=right(i);
      int smallest=i;
      if(lt<size && arr[lt]<arr[i])
      {
           smallest=lt;
      }
      if(rt<size && arr[rt]<arr[smallest])
      {
          smallest=rt;
      }
      if(smallest!=i)
      {
          swap(arr[smallest],arr[i]);
          Minheapify(smallest);
      }
  }

  int Extractmin()
  {
      if(size==0) return INT_MAX;
      if(size==1)
      {
          size--;
          return arr[0];
      }
      swap(arr[0],arr[size-1]);
      size--;
      Minheapify(0);
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

  void decreasekey(int i,int x)                //this function updates the value at ith position in array 
  {
      arr[i]=x;
      while(i!=0 && arr[parent(i)]>arr[i])
      {
          swap(arr[i],arr[parent(i)]);
          i=parent(i);
      }
  }

  void delete1(int i)                         //delete the ith element
  {
       arr[i]=INT_MIN;                        //we put -infinite at i and then make it root then call extractmin
       while(i!=0 && arr[parent(i)]>arr[i])
       {
           swap(arr[i],arr[parent(i)]);
           i=parent(i);
       }
       Extractmin();

  }

  

   



};


int main() 
{ 
    MinHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.delete1(0);
    h.insert(15);
    h.insert(20);
    cout << h.Extractmin() << endl;
    h.decreasekey(2, 1);
    cout << h.Extractmin() << endl;
    return 0;
} 