#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

Node *newnode(int val);

void print(Node *root)
{
	if (root == NULL)
		return;
	print(root->left);
	cout << root->data << endl;
	print(root->right);
}

Node *newnode(int val)
{
	Node *node = new Node();
	node->data = val;
	node->left = NULL;
	node->right = NULL;
	return node;
}

Node *arraytotree(int arr[], int begin, int end)
{
	if (begin > end)
		return NULL;
	int middle = (begin + end) / 2;
	Node *root = newnode(arr[middle]); 
	root->left = arraytotree(arr, begin, middle-1);
	root->right = arraytotree(arr, middle+1, end);
	return root;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int size = sizeof(arr)/ sizeof(arr[0]);
	Node *root = arraytotree(arr, 0, size-1);
	print(root);
	return 0;
}