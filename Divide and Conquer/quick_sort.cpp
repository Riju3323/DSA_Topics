#include<bits/stdc++.h>
using namespace std;

int split(vector<int> &v, int str, int end)
{
  int p = v[end];
  int i = str - 1;
  for(int itr=str;itr<end;itr++)
  {
    if(v[itr]<p)
    {
      i++;
      swap(v[i],v[itr]);
    }
  }
  swap(v[i+1],v[end]);
  return (i+1);

}

void quick_sort(vector<int> &v, int str, int end)

{
  if (str>=end)
  {
    return;
  }
  int s = split(v,str,end);
  quick_sort(v,str,s-1);
  quick_sort(v,s+1,end);
}


int main()
{
  int n,k;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    cin>>k;
    v.push_back(k);
  }

  quick_sort(v,0,n-1);

  for(auto x: v)
  {
    cout<<x<<" ";
  }
    return 0;
}