#include<bits/stdc++.h>
using namespace std;
class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int a)
  {
    data = a;
    left = right = NULL;
  }
};

Node* buildt(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}

	Node* n = new Node(d);
	n->left = buildt();
	n->right = buildt();
	return n;
}

void preorder(Node *root){
	if(root==NULL){
		return;
	}
	cout << root->data <<" ";
 preorder(root->left);
 preorder(root->right);
}
void printInorder(Node *root){
	if(root==NULL){
		return;
	}
	printInorder(root->left);
	cout<<root->data<<" ";
	printInorder(root->right);
}

void postOrder(Node * root){
	if(root==NULL){
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data <<" ";
}

void LevelPrintOrder(Node* root)
{
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		Node* x = q.front();
		if(x == NULL)
		{
			cout<<"\n";
			q.pop();
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else {
			q.pop();
			cout<<x->data<<" ";
			if(x->left)
			{
				q.push(x->left);
			}
			if(x->right)
			{
				q.push(x->right);
			}
		}
		return;
	}
  
}
int height(Node* root)
{
	if(root == NULL)
	{
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	return (max(h1,h2)+1);
}


int main(){

	Node * root = buildt();
  preorder(root);
	cout<<"\n\n";
	printInorder(root);
	cout<<"\n\n";
	postOrder(root);
	cout<<"\n\n";
	cout<<height(root);

	return 0;
}

