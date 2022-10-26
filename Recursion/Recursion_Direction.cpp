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

void solve(int a){
if(a==0)
{
  return;
}
cout<<a<<ln;
a--;
solve(a);
// cout<<a<<ln;
// a--;

}
int main()
{
   long long a;
   cin >>a;
   solve(a);
   return 0;
}