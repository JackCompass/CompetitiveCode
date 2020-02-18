#include <stdio.h>
#include <stdlib.h>
int stack[100];
int top=-1,size;
int push();
int pop();
int display();
int main()
{
	int choice;
	printf("Enter the size of the array : ");
	scanf("%d",&size);

	do
	{
		printf("1) Push\n2) Pop\n3) Display\n4) Exit\nEnter Your Choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			break;
			default: printf("Entered choice is wrong.\n");
			break;
		}
	}
	while(choice!=4);
	return 0;
}
int push()
{
	if(top>=(size-1))
	{
		printf("Stack Overflow.\n");
	}
	else
	{
		top++;
		printf("Enter element : ");
		scanf("%d",&(stack[top]));
	}
	printf("Enter Your choice again.\n");
	return 0;
}
int pop()
{
	if(top<=-1)
	{
		printf("Stack Underflow.\n");
	}
	else
	{
		top--;
	}
	printf("Enter Your choice again.\n");
	return 0;
}
int display()
{
	int i=0;
	for(i=0;i<size;i++)
		printf("%d ",stack[i]);
	printf("\nEnter Your choice again.\n");
	return 0;
}
