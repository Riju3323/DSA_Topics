#include<bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
long long int n;
cin>>n;
if(n%55==0)
{
  cout<<"BOTH";
}
else if (n%5==0 || n%11==0)
{
  cout<<"ONE";
}
else {
  cout<<"NONE";
}
}

int main()
{
     solve();
 return 0;
}