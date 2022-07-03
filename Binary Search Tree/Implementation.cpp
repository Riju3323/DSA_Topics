#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int key;
  Node* left;
  Node* right;

  Node (int key)
  {
    this->key = key;
    left = right = NULL;
  }
};

void printIO(Node* root)
{
  if(root=NULL)
  {
    return;
  }
	printIO(root->left);
	cout << root-> key <<" ,";
	printIO(root->right);
}


Node* binarysearchinsert(Node* root, int key)
{
  if(root==NULL){
	  return new Node(key);
	}
 
	if(key < root->key){
		root->left = binarysearchinsert(root->left,key);
	}
	else{
		root->right = binarysearchinsert(root->right,key);
	}
	return root;

}

int main()
{

Node* root = NULL;

  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[0];
  }
  for(auto x: arr)
  {
    binarysearchinsert(root, x);
  }
  printIO(root);
 return 0;
}