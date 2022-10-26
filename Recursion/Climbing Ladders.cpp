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

int solve(int n){
  if(n<0)
  {
    return 0;
  }
  if(n==0)
  {
    return 1;
  }
  return solve(n-1) + solve(n-2) + solve(n-3);

}
int main()
{
   long long a;
   cin >>a;
   cout<<solve(a);
   return 0;
}