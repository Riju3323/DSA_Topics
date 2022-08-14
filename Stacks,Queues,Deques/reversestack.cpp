#include<bits/stdc++.h>
using namespace std;

void botin(stack<int> &s, int data){

	if(s.empty()){
		s.push(data);
		return;}
	int temp = s.top();
	s.pop();
	botin(s,data);
	s.push(temp);
}

void reverse(stack<int> &s){

	if(s.empty()){
		return;
	}
	int i = s.top();
	s.pop();
	reverse(s);
	botin(s,i);
}


int main(){

	stack<int> s;
	s.push(4);
	s.push(11);
	s.push(9);
	s.push(5);
  botin(s,42);

	reverse(s);
	while(!s.empty()){
		cout<< s.top() <<endl;
		s.pop();
	}

return 0;
}