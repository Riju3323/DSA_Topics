#include <bits/stdc++.h>
using namespace std;
int INR[] = { 1, 2, 5, 10, 20, 50, 100, 500, 2000 };
int n = sizeof(INR) / sizeof(INR[0]);
  
void coinchange(int V)
{
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--) {
        while (V >= INR[i]) {
            V -= INR[i];
            ans.push_back(INR[i]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
  
int main()
{
  int n;
  cin>>n;
  cout<<"Currency Breakdown: ";
  coinchange(n);
  return 0;
}