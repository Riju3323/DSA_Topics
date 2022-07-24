#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned us;
typedef long double ld;
typedef complex<ld> cd;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef pair<ld,ld> pld;
typedef vector<ll> vll;
typedef vector<int> vii;
typedef vector<double> vd;
typedef vector<pll> vpll;
typedef vector<pdd> vpdd;
typedef vector<cd> vcd;
typedef vector<vector<int>> vvii;
typedef vector<vector<ll>> vvll;
typedef vector<vector<pll>> vvpll;

#define mp make_pair
#define pub push_back
#define fi first
#define se second
#define MOD 1000000007ll
#define maxn 1200005
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define forln(i,s,e,m) for(ll i=s; i< e; i += m)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define rforln(i,s,e,m) for(ll i = s; i >= e; i =- m)
#define ln "\n"
#define tke(t) ll t; cin>>t; while(t--)
#define ya cout<<"YES\n"
#define na cout<<"NO\n"
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define sz(x) ((ll)(x).size())
#define print(a)       for(auto x : a) cout << x << " "; cout <<ln
#define print1(a)      for(auto x : a) cout << x.fi << " " << x.se <<ln
#define all(x) (x).begin(), (x).end()

void solve(){
ll n;
cin>>n;
}

char d2c(int d){return d + '0';}
int c2d(char c){return c - '0';}
string bignumberadd(string n1, string n2){
if(n1.length() > n2.length()){
swap(n1,n2);
}
reverse(n1.begin(),n1.end());
reverse(n2.begin(),n2.end());
string res = "";
int c = 0;
for(int i=0; i < n1.length(); i++){
int d1 = c2d(n1[i]), d2 = c2d(n2[i]), sum = d1 + d2 + c, od = sum % 10;
c = sum/10; res += (d2c(od));
}
for(int i = n1.length(); i < n2.length(); i++){
int d2 = c2d(n2[i]), sum = d2 + c, od = sum % 10;
c = sum/10; res += (d2c(od));
}
if(c){res += ('1');}
reverse(res.begin(), res.end());
		return res;
}


int main()
{
	string a,b;
	cin>>a>>b;
	cout<<bignumberadd(a,b);
return 0;
}