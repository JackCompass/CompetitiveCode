#include <iostream>
using namespace std;

class Node
{
	public :
	int val;
	Node *next;
};

void createNode(Node **head_ref, int value)
{
	Node *newnode = new Node();
	newnode->val = value;
	newnode->next = *head_ref;
	*head_ref = newnode;
}

void printList(Node *head)
{
	while(head->next != NULL)
	{
		cout << head->val <<" -> ";
		head = head->next;
	}
	cout << head->val << endl;
}

void push(Node **head_ref, int value)
{
	Node *curr = *head_ref, *pre = NULL;
	Node *newnode = new Node();
	newnode->val = value;
	while (curr->val < value)
	{
		pre = curr;
		curr = curr->next;
	}
	// checking for the head.
	if (pre == NULL)
	{
		newnode->next = *head_ref;
		*head_ref = newnode;
	}
	else
	{
		newnode->next = curr;
		pre->next = newnode;
	}
}

int main()
{
	Node *head = NULL;
	int all_nodes[5];
	for (auto i = 0; i < 5; i++)
		cin >> all_nodes[i];
	for (auto i = 4; i >= 0; i--)
		createNode(&head, all_nodes[i]);
	push(&head, 9);
	printList(head);
	return 0;
}