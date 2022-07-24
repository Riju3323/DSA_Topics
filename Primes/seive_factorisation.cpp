#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define BIG 100000

void eratosthenes_seive(vector<ll> &vec, ll n)
{
  for(int i=1; i<=n; i++){
		vec[i] = i;
	}

  for(ll i=2;i<=n;i++)
  {
		if(vec[i]==i)
    {
			for(ll j=i*i;j<=n;j += i)
    {
      if(vec[j]==j)
      {
        vec[j] = i;
      }
    }
		}
  }
}

vector<ll> primefac(ll n, vector<ll> &vec){
	vector<ll> fac;
	while(n!=1){
		fac.push_back(vec[n]);
		n = n/vec[n];
	}return fac;
}


int main(){
	vector<ll> prime(BIG+1,0);
	eratosthenes_seive(prime,BIG);
	ll n;
	cin>>n;
	vector<ll>  fac = primefac(n,prime);
	for(ll f : fac){
		cout << f <<" * ";
	}
	cout<<"1";
	return 0;
}

