#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    
    stack<int> s;
    int k = n,count=0, x=1,rev=0;
    while(k>0)
    {
        s.push(k%10);
        k = k/10;
        count++;
    }
    for(int i=0;i<count;i++)
    {
        rev += (s.top())*(x);
        s.pop();
        x *= 10;
    }
    return rev;
}

int main()
{
  int n;
  cin>>n;
  cout<<reverse(n);
  return 0;
}