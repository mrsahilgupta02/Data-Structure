#include<bits/stdc++.h>
using namespace std;

class Graph
{
    private:
    bool**adjmatrix;   // we make it as bool because we want 0 or 1 in our matrix
    int numVertices;


    public:
    Graph(int numofvertices)     //we make matrix alll elements 0     ,(v*v) nu of elements in matrix,where v is nu of vertices 
    {
        numVertices=numofvertices;
        adjmatrix=new bool*[numVertices];
        for(int i=0;i<numVertices;i++)
        {
            adjmatrix[i]=new bool[numVertices];
            for(int j=0;j<numVertices;j++)
            {
                  adjmatrix[i][j]=false;
            }
        } 
    }


    // Add edges
  void addEdge(int i, int j) {
    adjmatrix[i][j] = true;
    adjmatrix[j][i] = true;
  }

  // Remove edges
  void removeEdge(int i, int j) {
    adjmatrix[i][j] = false;
    adjmatrix[j][i] = false;
  }

  // Print the martix
  void toString() 
  {
    for (int i = 0; i < numVertices; i++) {
      cout << i << " : ";
      for (int j = 0; j < numVertices; j++)
        cout << adjmatrix[i][j] << " ";
      cout << "\n";
    }
  }

};

int main() {
  Graph g(4);

  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);

  g.toString();
}