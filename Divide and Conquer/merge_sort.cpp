#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int end)
{
  vector<int> place;
  int a = start, middle = (start+end)/2, b = middle+1, y =0;
  while(a<=middle && b<=end)
  {
    if(arr[a]<arr[b])
    {
      place.push_back(arr[a]);
      a++;
    }
    else
    {
      place.push_back(arr[b]);
      b++;
    }
  }
  while(a<=middle)
  {
    place.push_back(arr[a]);
    a++;
  }
    while(b<=end)
  {
    place.push_back(arr[b]);
    b++;
  }
  for(int i=start;i<=end;i++)
  {
    arr[i] = place[y];
    y++;
  }
}

void merge_sort(vector<int> &arr, int start, int end)

{
  int middle = (start+end)/2;
  if(start>=end) {return;}
  merge_sort(arr,start,middle);
  merge_sort(arr,(middle+1),end);
  return merge(arr,start,end);
}


int main()
{
  vector<int> a;
  int n,x;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    a.push_back(x);
  }
  merge_sort(a,0,n-1);
  for(int z: a)
  {
    cout<<z<<" ";
  }
  return 0;
}