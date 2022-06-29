#include<bits/stdc++.h>
using namespace std;

class List;

class Node{
  public:
	int data;
	Node* next;
	Node(int d):data(d),next(NULL){}

	int getData(){
		return data;
	}
	// ~Node(){
	// 	if(next!=NULL){
	// 		delete next;
	// 	}
	// 	cout<<"Deleting Node with Data"<<data <<endl;
	// }

	friend class List;
};


class List{
	Node * head;
	Node * tail;

	int searcher(Node *start, int key){
		if(start==NULL){
			return -1;
		}
		if(start->data==key){
			return 0;
		}
		int subIdx = searcher(start->next,key);
		if(subIdx==-1){
			return -1;
		}
		return subIdx + 1;

	}


public:

	List():head(NULL),tail(NULL){}

	Node* begin(){
		return head;
	}

	void push_front(int data){
		if(head==NULL){
			Node * n = new Node(data);
			head = tail = n;
		}
		else{
			Node * n = new Node(data);
			n->next = head;
			head = n;
		}
	}

	void push_back(int data){
		if(head==NULL){
			Node * n = new Node(data);
			head = tail = n;
		}
		else{
			Node * n = new Node(data);
			tail->next = n;
			tail = n;
		}
	}
	void insert(int data,int pos){
		if(pos==0){
			push_front(data);
			return;
		}
		Node* temp = head;
		for(int jump=1;jump<=pos-1;jump++){
			temp = temp->next;
		}

		Node * n = new Node(data);
		n->next = temp->next;
		temp->next = n;
	}

  //Iterative Search 

	int search(int key){

		Node * temp = head;
		int i = 0;

		while(temp!=NULL){
			if(temp->data == key){
				return i;
			}
			i++;
			temp = temp->next;
		}	
		return -1;
	}

  //Recursive Search

	int recSearch(int key){
		int i = searcher(head,key);
		return i;
	}

	void pop_front(){
		Node * temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}

	void pop_back(){
    Node *temp = head;
    while(temp->next != tail)
      {temp = temp->next;}     
    temp->next = NULL;
    delete tail;
    tail = temp;
	}

	void remove(int pos){

	}


  void revvv(Node*&head)
  {
    Node*curr = head;
    Node*prevv = NULL;
    Node*temp;

    while(curr!=NULL)
    {
      temp = curr -> next;
      curr -> next = prevv;
      prevv = curr;
      curr = temp;
    }
    head = prevv;
  }

	// ~List(){
	// 	if(head!=NULL){
	// 		delete head;
	// 		head = NULL;
	// 	}
	// }
};











