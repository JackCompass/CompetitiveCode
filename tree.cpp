# include <iostream>
# include <bits/stdc++.h>

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

void preorder(Node *root)
{
	if (root == NULL)
		return;
	cout << root->data << endl;
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node *root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->data << endl;
	inorder(root->right);
}

void postorder(Node *root)
{
	if (root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << endl;
}

int treedepth(Node *root)
{
	if (root == NULL)
		return 0;
	else
	{
		cout << "Root value : " << root->data << endl;
		int left_D = treedepth(root->left);
		int right_D = treedepth(root->right);
		cout << "Left : " << left_D << " Right : " << right_D << endl;
		if(left_D > right_D)
			return left_D + 1;
		else 
			return right_D + 1;
	}
}

vector< vector<int>> level_vect;

void levelorder(Node *root, int level)
{
	if (root == NULL)
		return;
	if (level >= level_vect.size())
		level_vect.push_back({});
	level_vect[level].push_back(root->data);
	levelorder(root->left, level+1);
	levelorder(root->right, level+1);
}

int main()
{
	struct Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);

	// preorder(root);
	// cout << "----------------------------------------------------------------" << endl;
	// inorder(root);
	// cout << "----------------------------------------------------------------" << endl;
	// postorder(root);
	// cout << < "--------------------------------------------------------------" << endl;
	levelorder(root, 0);

	// printing out the result;

	for (auto i = 0; i < level_vect.size(); i++)
	{
		for (auto j = 0; j < level_vect[i].size(); j++)
			cout << level_vect[i][j] << "  ";
		cout << endl;
	}
	// Symmetrical function
	// cout << treedepth(root) << endl;
	return 0;
}