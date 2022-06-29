#include <bits/stdc++.h>  
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int linear_search(int arr[], int k, int n)
{
    for(int i=0;i<n;i++)
    {
    	if(arr[i] == k)
    	{
    		return i;
    	}
    }
    
    return -1;
} 
 
 

int main()
{
    fast_cin();
    int k;
    cin>>k;
    int arr[]={10,11,13,12,71,45,21,45,-21};
    int n = sizeof(arr)/sizeof(int);
    auto flag = linear_search(arr,k,n);
    if(flag!= -1)
    {
    	cout<< "Location: "<<flag+1;
    }
    
    else 
    {
    	cout<<"Nil";
    }
   
   return 0; 
}