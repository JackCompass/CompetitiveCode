#include <stdio.h>

// Function to calculate the occurence of different elements in the user array.
int frequency_calculator(int size)
{
	// An array which is used to
	int distinct_occurence[size];
	int num_frequency[size];
	int user_num[size];
	int i,j;
	int index = 0;
	int flag = 0;
	int count = 0;

	printf("Enter the elements of the array : ");

	for(i = 0; i < size; i++)
	{
		scanf("%d", &user_num[i]);
	}

	for(i = 0; i < size; i++)
	{
		for(j = 0; j <= i; j++)
		{
			if(distinct_occurence[j] == user_num[i])
			{
				flag = 1;
			}
		}

		if(flag == 0)
		{
			distinct_occurence[index] = user_num[i];
		}
		else
		{
			distinct_occurence[index] = -1;
		}
		index ++;
		flag = 0;
	}

	for(i = 0; i < size; i++)
	{
		if(distinct_occurence[i] >= 0)
		{
			for(j = 0; j < size; j++)
			{
				if(distinct_occurence[i] == user_num[j])
				{
					count++;
				}
			}

		printf("%d: %d times \n", distinct_occurence[i],count);

		}

		count = 0;
	}
	return 0;
}
int main()
{
	int size;
	do
	{
		printf("Enter the size : ");
		scanf("%d", &size);
	} while(size < 5);

	frequency_calculator(size);

	return 0;
}
