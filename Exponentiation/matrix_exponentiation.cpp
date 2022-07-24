#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int MOD = 1e9 + 7;

const int mtexsize = 2;
struct Matex {
int m[mtexsize][mtexsize];
Matex() {  memset(m, 0, sizeof(m)); }
void identity() {
for (int i = 0; i < mtexsize; i++) {  m[i][i] = 1; }
}
Matex operator* (Matex a) {
Matex res;
for (int i = 0; i < mtexsize; i++) {
for (int j = 0; j < mtexsize; j++) {
for (int k = 0; k < mtexsize; k++) {
res.m[i][j] += m[i][k] * a.m[k][j];
res.m[i][j] %= MOD;
}
}
}
return res;
}
};

int FiboMatEx(int n) {
	Matex res;
	res.identity();
	Matex T;
	T.m[0][0] = T.m[0][1] = T.m[1][0] = 1;

	if (n <= 2) return 1;
	n -= 2;

	while (n) {
		if (n & 1) res = res * T;
		T = T * T;
		n /= 2;
	}

	return (res.m[0][0] + res.m[0][1]) % MOD;
}

int32_t main()
{

	int n = 4;

	cout << FiboMatEx(n);

	return 0;
}

