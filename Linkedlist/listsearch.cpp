#include<bits/stdc++.h>
#include "list.h"
using namespace std;
int main(){

	List lisst;
	lisst.push_front(2);
	lisst.push_front(1);
	lisst.push_back(3);
	lisst.push_back(4);
  lisst.push_back(6);
	lisst.insert(0,0);
	lisst.insert(5,5);

	Node* head = lisst.begin();
  cout<< "The list is: "<<"\n";
	while(head!=NULL){
		cout<< head->getData()<<"->";
		head = head->next;}
	int a;
	cin>>a;
  cout<<"\n";
	cout << "The element " <<a<<" is at: " << lisst.recSearch(a) <<"\n";
	cout<<"\n";
  lisst.pop_front();

	cout << "Now the element "<<a<<" is at: " << lisst.recSearch(a) <<"\n";
	cout<<"\n";
  lisst.pop_back();

  cout<< "Now the list becomes:"<<"\n";
  head = lisst.begin();
  while(head!=NULL){
		cout<< head->getData()<<"->";
		head = head->next;
  }
	return 0;
}