#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>>& graph, int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void printGraph(vector<vector<int>> graph)
{
  for(int i = 0; i<graph.size(); i++)
  {
    cout<< "Head - " << i<<" :";
    for(auto x : graph[i])
    {
      cout<<" -> "<<x;
    }
    cout<<"\n";
  }
}

int main()
{
  vector<vector<int>> graph(5);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    printGraph(graph);
}