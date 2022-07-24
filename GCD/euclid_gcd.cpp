#include<bits/stdc++.h>
using namespace std;
int euclid_gcd(int a,int b){
	if(b==0){
		return a;
	}
	return euclid_gcd(b, a%b);
}



int main(){
	int a,b;
	cin>>a>>b;
	cout << euclid_gcd(a,b) <<endl;
	return 0;
}