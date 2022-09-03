#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {
    if((n&(n-1))==0){
        n = n/2;
    }
    if((n&(n-1))==0)
    {
      return true;
    }
    return false;
}

int main()
{
   int a;
   cin >>a;
   cout<< isPowerOfFour(a);
   return 0;
}