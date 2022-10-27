// Given a number N and a old mobile keypad, find out all possible key combinations possible to make with it
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

string keypad[] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void solve(string a, string output, int i=0){
  if(a[i]=='\0')
  {
    cout<<output<<ln;
    return;
  }
int currdig = a[i] - '0';
if(currdig == 0 || currdig == 1)
{
  solve(a,output,i+1);
}
forn(k,keypad[currdig].size())
{
  solve(a,output+keypad[currdig][k],i+1);
}
return;
}
int main()
{
   string a;
   string b;
   int i = 0;
   cin >>a;
   solve(a,b,i);
   return 0;
}