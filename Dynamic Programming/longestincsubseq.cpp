#include<bits/stdc++.h>
using namespace std;

int longsub(vector<int> v)
{
	int n = v.size(),l=1;
	vector<int> dp(n,1);
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(v[i]>v[j])
			dp[i] = max(dp[i],1+dp[j]);
			l = max(l,dp[i]);
		}
	}
	return l;
}

int main()
{
	vector<int> v{4,1,55,22,11,33,991,3,41,1000,2000};
	cout<<longsub(v);
	 return 0;
}