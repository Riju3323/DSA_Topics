#include<bits/stdc++.h>
using namespace std;
long long modularexponentiaion(long long x, long long y, long long m)
{  
    long long res = 1;     
    x = x % m; 
    if (x == 0) return 0;
    while (y > 0)
    {
      if (y & 1){res = (res*x) % m;}
      y = y>>1;  x = (x*x) % m;
    } return res;
}


