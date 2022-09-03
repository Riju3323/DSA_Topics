#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    int count = 0, temp = 0;
    while(n>0)
    {
        if(n&1)
        {
            count++;
            temp = max(temp,count);
            n = n>>1;
        }
        else{
            count = 0;
            n = n>>1;
        }
    }
    return temp;
}