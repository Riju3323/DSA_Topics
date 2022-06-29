#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n)
{
    
    
    vector<vector<int>> arr;


    for(int i=0;i<n;i++)
     {
         vector<int> v1;
    for(int j=0;j<i+1;j++)
    {
        if(i==0 && j==0)
        { v1.push_back(1);
        }
        else if(j==0)
        {
            v1.push_back(arr[i-1][j]);
        }
        else if(j==i)
        {
            v1.push_back(arr[i-1][j-1]);
        }
        else
        {
            v1.push_back((arr[i-1][j] + arr[i-1][j-1]));
        }
    }
    arr.push_back(v1);}
    
     return arr;
    
}

int main()
{
    vector<vector<int>> arr;
    arr = printPascal(5);
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}
