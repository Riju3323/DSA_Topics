//Given a 4*N board, and tiles of size 4*1. Calculate the number of ways to tile the floor.

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

int solve(int a){
  if(a<=2)
  {
    
    return a;
  }
  return solve(a-1) + solve(a-2);
}
int main()
{
   int a;
   cin >>a;
   cout<<solve(a);
   return 0;
}