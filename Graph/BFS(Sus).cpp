#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>>& graph, int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void printGraph(vector<vector<int>> graph)
{
  for(int i = 1; i<=graph.size(); i++)
  {
    cout<< "Head - " << i<<" :";
    for(auto x : graph[i])
    {
      cout<<" -> "<<x;
    }
    cout<<"\n";
  }
}

void BFS(vector<vector<int>> graph, int a)
{
  int z = graph.size();
  queue<int> temp;
  vector<bool> visited(z,false);
  visited[a] = true;
  temp.push(a);
  while(!temp.empty())
  {
    a = temp.front();
    cout<<a<<" ";
    temp.pop();
    for(auto k:graph[a])
    {
      if(!visited[k])
      {
        temp.push(k);
        visited[k]=true;
      }
    }
  }
}

int main()
{
  vector<vector<int>> graph(8);
    addEdge(graph, 1, 5);
    addEdge(graph, 1, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 6);
    addEdge(graph, 2, 7);
    addEdge(graph, 2, 3);
    BFS(graph,1);
}