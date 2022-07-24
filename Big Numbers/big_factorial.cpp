#include <bits/stdc++.h>
using namespace std;

void bigfacmultiply(vector<long long> &a, long long n, long long &sz)
{long long c = 0;
for (long long i = 0; i < sz; i++)
{long long prod = (a[i] * n) + c;
a[i] = prod % 10;
c = prod / 10;}
while (c)
{a[sz] = c % 10;
c = c / 10;
sz++;}
}

void bignumberfactorial(long long n)
{
vector<long long> bigfac(1000000, 0);
bigfac[0] = 1;
long long sz = 1;
for (long long i = 2; i <= n; i++)
{bigfacmultiply(bigfac, i, sz);}
for (long long i = sz - 1; i >= 0; i--)
{cout << bigfac[i];}
cout << endl;
}

int main()
{

	long long n;
	cin >> n;

	bignumberfactorial(n);

	return 0;
}


