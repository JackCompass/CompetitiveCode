#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

Node *newnode(int val)
{
	Node *node = new Node();
	node->data = val;
	node->left = NULL;
	node->right = NULL;
	return node;
}

int min_height(Node *root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL)
		return 1 + max_height(root->right);
	else if (root->right == NULL)
		return 1 + max_height(root->left);
	return max(max_height(root->left),max_height(root->right)) + 1;
}

int main()
{
	Node *node = newnode(1);
	node->left = newnode(2);
	node->right = newnode(3);
	node->right->left = newnode(4);
	node->right->right = newnode(5);

	cout << "The maximum height is : " << min_height(node) << endl;

	return 0;
}