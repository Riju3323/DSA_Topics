#include<bits/stdc++.h>
using namespace std;

// long long fact(long long c)
// {
//     if(c==0)
//     {
//         return 1;
//     }
//     return c*fact(c-1);
// }

// long long comb(long long a, long long b)
// {
//     long long z = fact(a)/(fact(b)*fact(a-b));
//     return z;
// }
#define fivefac  120
#define sixfac  720
#define sevfac  5040

long long solve(int n){   
  long long a=1, sum=0;

  for(int i=0;i<7;i++)
  {
    a = a*(n-i);
    if(i==4)
    {
      sum+= (a/fivefac);
    }
    if(i==5)
    {
      sum+= (a/sixfac);
    }
  }
  sum+= (a/sevfac);
  return sum;
}


int main()
{
  int a;
  cin>>a;
  cout<<solve(a);
}