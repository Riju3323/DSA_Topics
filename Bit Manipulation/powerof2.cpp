#include<bits/stdc++.h>
using namespace std;

void powerof2check(int a)
{
  if ((a)&(a-1))
  {
    cout<<"Not a power of two"<<"\n";
  }
  else {
    cout<<"It is a power of two"<<"\n";
  }
}

int roundinguptopowerof2(int a)
{
  int ans = 1;
  if(a<1) {return 0;}
  else
  {
    for(int i=0;i<32;i++)
    {ans = ans<<1;
    if(ans>=a){break;}} 
     return ans;
  }
}


int main()
{
  int a;
  cin>>a;
  powerof2check(a);
  cout<<roundinguptopowerof2(a);
 return 0;
}