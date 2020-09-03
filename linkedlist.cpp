# include <iostream>
using namespace std;

class Node
{
	public :
	int val;
	Node *next;
};

void printList(Node *head)
{
	while(head != NULL)
	{
		cout << head->val << endl;
		head = head->next;
	}
}

void swapnodes(Node **start, int item1, int item2)
{
	if (item1 == item2)
		return;
	
	Node *preX = NULL, *currX = *start;
	while(currX != NULL && currX->val != item1)
	{
		preX = currX;
		currX = currX->next;
	}

	Node *preY = NULL, *currY = *start;
	while(currY != NULL && currY->val != item2)
	{
		preY = currY;
		currY = currY->next;
	}
	if (currX == NULL || currY == NULL)
		return;

	if (preX != NULL)
	{
		preX->next = currY;
	}
	else
	{
		*start = currY;
	}
	if (preY != NULL)
	{
		preY->next = currX;
	}
	else 
	{
		*start = currX;
	}

	Node *temp = currY->next;
	currY->next = currX->next;
	currX->next = temp;

}

int main()
{
	int num = 5;
	int key1, key2;
	Node *head = NULL, *track = NULL;
	while(num--)
	{
		int data; 
		cin >> data;
		Node *newnode = new Node();
		newnode->val = data;
		newnode->next = NULL;
		if (head == NULL)
		{
			head = newnode;
			track = head;
		}
		else
		{
			track->next = newnode;
			track = newnode;
		}

	}
	printList(head);
	cout << "Enter key : ";
	cin >> key1 >> key2;
	swapnodes(&head, key1, key2);
	printList(head);
	return 0;
}