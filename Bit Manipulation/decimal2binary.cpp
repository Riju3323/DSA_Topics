#include<bits/stdc++.h>
using namespace std;

int decbin(int a)
{
  int binar = 0;
  int x = 1;
  while (a>0)
  {
    int y = (a&1);
    binar += y*x;
    
    a = a>>1;
    x = x*10;
  }
  return binar;
}


int main()
{
  int t,a;
  cin>>t;
  while(t--)
  {
    cin>>a;
    cout<<decbin(a)<<"\n";
  }

  return 0;
}