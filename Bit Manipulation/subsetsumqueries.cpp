#include<bits/stdc++.h>
using namespace std;

vector<bool> bitsubsetsumqueries(vector<int> arr, vector<int> que)
{
  vector<bool> checker; bitset<100000> b;
  b.reset(); b[0]=1;
  for(int i=0;i<arr.size();i++)
  {b = b|(b<<arr[i]);}
  for(int i=0;i<que.size();i++)
  {if(b[que[i]])
    {checker.push_back(true);}
    else
    {checker.push_back(false);}
  }
  return checker;
}


int main()
{
   vector<int> a = {1,2,3};
   vector<int> q = {3,5,8,6};
   vector<bool> check;
   check = bitsubsetsumqueries(a,q);
   for(int i=0;i<check.size();i++)
   {
    if(check[i]==true)
    {cout<<"HOLA"<<"\n";
    }
    else {
      cout<<"NOPE"<<"\n";
    }
   }
   
   return 0;
}