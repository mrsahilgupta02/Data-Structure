#include <bits/stdc++.h> 
using namespace std; 

class MinHeap{
    int *arr;
    int size;
    int capacity;
    
    public:
    
    MinHeap(int c){
    size = 0; 
    capacity = c; 
    arr = new int[c];
    }

    int left(int i) { return (2*i + 1); } 
    int right(int i) { return (2*i + 2); } 
    int parent(int i) { return (i-1)/2; } 
    
    void minHeapify(int i) 
    { 
    int lt = left(i); 
    int rt = right(i); 
    int smallest = i; 
    if (lt < size && arr[lt] < arr[i]) 
        smallest = lt; 
    if (rt < size && arr[rt] < arr[smallest]) 
        smallest = rt; 
    if (smallest != i) 
    { 
        swap(arr[i],arr[smallest]); 
        minHeapify(smallest); 
    } 
    }
    
    void buildHeap()       //this function is work as wehave given a random array we have to make ita heap;
    {
        for(int i=(size-2)/2;i>=0;i--)      //we start from parent of last elements means insex=size-1; and parent is (size-1-1)/2  for it
            minHeapify(i);
    }

    void show()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }

    void insert(int x )
    {
        if(size==capacity) return;
        size++;
        arr[size-1]=x;
    }
    
};

int main() 
{ 
    MinHeap h(11);
    h.insert(3);
    h.insert(4);
    h.insert(2);
    h.show();
    h.buildHeap();
    h.show();
    return 0;
} 
