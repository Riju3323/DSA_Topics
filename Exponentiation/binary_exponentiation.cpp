#include<bits/stdc++.h>
using namespace std;
long long powr(long long a, long long n) {
	long long res = 1;
	while (n) {
		if (n & 1) res *= a;
		a *= a;
		n /= 2;
	}
	return res;
}
