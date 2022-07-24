#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void eratosthenes_seive(vector<ll> &vec, ll n)
{
  vec[0] = 0; vec[1] = 0;

  for(ll i=2;i<=n;i++)
  {
    for(ll j=i*i;j<=n;j += i)
    {
      if(vec[j])
      {
        vec[j] = 0;
      }
    }
  }
}

int main()
{
   ll a;
   cin >>a;
   vector<ll> v(a+1,1);
   eratosthenes_seive(v,a);
   for(ll i=0;i<=a;i++)
   {
    if(v[i])
    {
      cout<<i<<" ";
    }
   }
   return 0;
}