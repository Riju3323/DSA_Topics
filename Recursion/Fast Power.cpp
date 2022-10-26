#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define forln(i,s,e,m) for(ll i=s; i< e; i += m)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define rforln(i,s,e,m) for(ll i = s; i >= e; i =- m)
#define ln "\n"

int solve(int a,int b){
  if(b==0)
  {
    return 1;
  }
  int ans = solve(a,b/2);
  int anss = ans*ans;
  if(b&1)
  {
    return anss*a;
  }
  return anss;
}
int main()
{
  int a,b;
  cin>>a>>b;
  cout<<solve(a,b);
  return 0;
}