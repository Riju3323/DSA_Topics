#include<bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y) {
    int c = x^y, count=0;
    while(c>0)
    {
        if(c&1)
        {
            count++;
        }
        c = c>>1;
    }
    return count;
}