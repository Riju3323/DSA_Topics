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

void solve(string output,int a, int i,int open, int close){
  if(i==2*a)
  {
    cout<<output<<ln;
    return;
  }
  if(open<a)
  {
  solve(output+'(',a,i+1,open+1,close);
  }
  if(close<open)
  {
  solve(output+')',a,i+1,open,close+1);
  }
}
int main()
{
   int a;
   int i = 0, open = 0, close=0;
   string output;
   cin >>a;
   solve(output,a,i,open,close);
   return 0;
}