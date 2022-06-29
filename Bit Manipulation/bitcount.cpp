#include<bits/stdc++.h>
using namespace std;

int bitcount(int a)
{
    int count=0;
    while (a>0)
    {
        a = a&(a-1);
        count++;
    }
    return count;  
}


int main()
{
    int n;
    cin>>n;
    cout<<bitcount(n);
    return 0;
}