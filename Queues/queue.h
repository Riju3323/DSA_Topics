#include<bits/stdc++.h>
using namespace std;

class Queue{
	int *arr;
	int size, max, front, back; 

public:
	Queue(int default_size=10){
		max = default_size;
		arr = new int[max];
		size = 0, front = 0, back = max - 1;
	}
	bool full(){
		return (size==max);
	}
	bool empty(){
		return (size==0);
	}
	void push(int data){
		if(!full()){
			back = (back + 1)%max;
			arr[back] = data;
			size++;
		}
	}
	void pop(){
		if(!empty()){
			front = (front + 1)%max;
			size--;
		}
	}
	int getFront(){
		return arr[front];
	}
};