#include<bits/stdc++.h>
using namespace std;

void oddcheck(int a)
{
    if(a&1)
    {
        cout<<"Odd"<<"\n";
    }
    else {
        cout<<"Even"<<"\n";
    }
}

int main()

{
    int n;
    cin>>n;
    oddcheck(n);
    return 0;
}


 

