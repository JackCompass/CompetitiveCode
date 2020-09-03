# include <iostream>
using namespace std;

class ListNode
{
	public :
	int val;
	ListNode *next;
};

void printList(ListNode *start)
{
	while(start != NULL)
	{
		cout << start->val << " ";
		start = start->next;
	}
	cout << endl;
}

void Listadd(ListNode *head1, ListNode *head2)
{
	ListNode *l3 = NULL, *track = NULL;
	int carry = 0, total = 0;
	while (head1 != NULL or head2 != NULL or carry > 0 )
	{
		if (head1 != NULL)
		{
			total += head1->val;
			head1 = head1->next;
		}
		if (head2 != NULL)
		{
			total += head2->val;
			head2 = head2->next;
		}
		total += carry;
		carry = 0;
		if (total > 9)
		{
			int rem = total % 10;
			total = total / 10;
			carry = total;
			total = rem;
		}
		ListNode *newnode = new ListNode();
		newnode->val = total;
		newnode->next = NULL;
		if (l3 == NULL)
		{
			l3 = newnode;
			track = l3;
		}
		else
		{
			track->next = newnode;
			track = newnode;
		}
		total = 0;
	}
	printList(l3);
}

int main()
{
	int num = 5;
	int call = 9;
	ListNode *head1 = NULL;
	ListNode *head2 = NULL;
	ListNode *start1 = NULL;
	ListNode *start2 = NULL;

	while( num)
	{
		ListNode *newnode = new ListNode();
		newnode->val = num;
		newnode->next = NULL;
		if (head1 == NULL)
		{
			head1 = newnode;
			start1 = head1;
		}
		else 
		{
			head1->next = newnode;
			head1 = head1->next;
		}
		num--;
	}
	while(call >= 5)
	{
		ListNode *newnode = new ListNode();
		newnode->val = call;
		newnode->next = NULL;
		if (head2 == NULL)
		{
			head2 = newnode;
			start2 = head2;
		}
		else 
		{
			head2->next = newnode;
			head2 = head2->next;
		}
		call--;
	}
	printList(start1);
	printList(start2);
	Listadd(start1, start2);
	return 0;
}