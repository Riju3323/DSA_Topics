#include<bits/stdc++.h>
#include "queue.h"
using namespace std;

int main()
{
  Queue temp(12);
  temp.push(1);
	temp.push(2);
	temp.push(3);
	temp.push(4);
	temp.push(5);
  temp.pop();
	temp.pop();
	temp.push(6);
	temp.push(7);
	temp.push(8);
  temp.push(9);
	temp.push(10);
	temp.push(11);
  temp.push(12);
	temp.push(13);
	temp.push(14);
  temp.push(15);
  temp.push(16);
  temp.push(17);
  temp.pop();
	temp.push(15);

	while(!temp.empty()){
		cout << temp.getFront() <<" ";
		temp.pop();
	}
    return 0;
}