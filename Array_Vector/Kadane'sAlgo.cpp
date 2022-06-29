#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n)
{

	int summ = 0, mx=0;

	for(int i=0;i<n;i++){
		summ += arr[i];
		if(summ < 0){
			summ = 0;
		}
		mx = max(mx, summ);
	}

	return mx;
}


int main(){
	int arr[] = {42,51,62,-55,44,1,44,5,2,4,-2214,77,33,-33,0,90,1100};
	int n = sizeof(arr)/sizeof(int);

	cout<< kadane(arr,n) <<"\n";
    return 0;
}