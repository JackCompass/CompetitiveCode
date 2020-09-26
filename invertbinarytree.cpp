#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;

	Node (int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

void inverttree(Node *root)
{
	if (root == NULL)
		return;
	Node *bar;
	bar = root->left;
	root->left = root->right;
	root->right = bar;
	inverttree(root->left);
	inverttree(root->right);
}

void preorder(Node *root)
{
	if (root == NULL)
		return;
	
	cout << root->data << endl;
	preorder(root->left);
	preorder(root->right);
}

int main()
{
	Node* root = new Node(1); 
	root->left = new Node(2); 
	root->right = new Node(3); 
	root->left->left = new Node(4); 
	root->left->right = new Node(5); 
	root->left->left->left = new Node(8);
	preorder(root);
	inverttree(root);
	cout << "--------------------------------" << endl;
	preorder(root);
	return 0;
}