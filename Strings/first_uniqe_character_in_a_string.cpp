#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    
     unordered_map<char,int> m;
     for(auto x:s)
     {
         m[x]++;
     }
     for(int i=0;i<s.size();i++)
     {
         if(m[s[i]]==1)
         {
             return i;
         }
     }
     
     return -1;
}

int main()
{
  string s = "hhheeello";
  cout<<firstUniqChar(s);
  return 0;

}