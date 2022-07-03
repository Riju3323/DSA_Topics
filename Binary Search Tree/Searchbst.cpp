#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int x;
  Node* left;
  Node* right;

  Node (int x)
  {
    this->x = x; 
    left = right = NULL; 
  }
};


void printIO(Node * root)
{
  if(root==NULL)
  {
    return;
  }
	printIO(root->left);
	cout << root-> x <<" ";
	printIO(root->right);
}


Node* bstin(Node* root, int x)
{
  if(root==NULL){
	  return new Node(x);
	}
 
	if(x < root->x){
		root->left = bstin(root->left,x);
	}
	else{
		root->right = bstin(root->right,x);
	}
	return root;

}

bool searchbst(Node* root, int x)
{
  if(root==NULL)
  {
    return false;
  }
  if(root->x == x)
  {
    return true;
  }
  if(x<root->x)
  {
    return searchbst(root->left,x);
  }
  else {
    return searchbst(root->right,x);
  }
}

int main()
{

Node* root = NULL;
int n,z;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
  cin>>arr[i];
}

  for(auto i: arr)
  {
    root = bstin(root, i);
  }
  printIO(root);
  cout<<"\n";
  cin>>z;
  if(searchbst(root,z)==true)
  {
    cout<<"It's present";
  }
  else {
    cout<<"It isn't present";
  }

 return 0;
}