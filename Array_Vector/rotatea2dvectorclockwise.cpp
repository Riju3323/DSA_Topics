#include<bits/stdc++.h>
using namespace std;

void rotate2dvector(vector<vector<int>>& vec) {
int n = vec.size(), a = 0, b = n-1;
while(a<b){
  for(int i=0;i<(b-a);++i){
    swap(vec[a][a+i], vec[a+i][b]);
    swap(vec[a][a+i], vec[b][b-i]);
    swap(vec[a][a+i], vec[b-i][a]);
    }++a;--b;}}

int main()
{
  int temp;
  vector<vector<int>> v = {
    {1,2,3,96},
    {4,5,6,97},
    {7,8,9,98},
    {10,11,12,99}
  };
  for(int i=0;i<v.size();i++)
  {
    for (int j = 0; j < v.size(); j++)
    {
      cout<<v[i][j];
    }
    cout<<"\n";
  }
  cout<<"\n\n";
  rotate2dvector(v);
  for(int i=0;i<v.size();i++)
  {
    for (int j = 0; j < v.size(); j++)
    {
      cout<<v[i][j];
    }
    cout<<"\n";
  }
  cout<<"\n\n";

  return 0;
}