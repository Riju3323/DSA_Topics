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

bool solve(int arr[],int a, int i){
  if(i==a)
  {
    return true;
  }
  if(arr[i]>arr[i+1])
  {
    return false;
  }
  return solve(arr,a,i+1);
}
int main()
{
   long long a;
   cin >>a;
   int arr[a];
   forn(i,a)
   {
    cin>>arr[i];
   }
   int i = 0;
   cout<<solve(arr,a,i);
   return 0;
}