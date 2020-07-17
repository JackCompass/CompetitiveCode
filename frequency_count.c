#include <stdio.h>

// Function to calculate the occurence of different elements in the user array.
int frequency_calculator(int size)
{
	// An array which is used to store the distinct element of the user_array.
	int distinct_occurence[size];

	// An array used to calculate the frequency of a particular number.
	int num_frequency[size];

	// Array to store the user input array.
	int user_num[size];

	int i,j;
	int index = 0;
	int flag = 0;
	int count = 0;
	int distinct_array_size = 0;

	printf("Enter the elements of the array : ");

	// Taking input from the user.
	for(i = 0; i < size; i++)
	{
		scanf("%d", &user_num[i]);
	}

	// This portion finds out the distinct elements from the user given array.
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < index; j++)
		{
			if(distinct_occurence[j] == user_num[i])
			{
				flag = 1;
			}
		}

		if(flag == 0)
		{
			distinct_occurence[index] = user_num[i];
			index += 1;
		}

		flag = 0;
	}

	// distinct_array_size is the total number of distinct element in the user given array.

	distinct_array_size = index;

	// Counting the frequency of the distinct elements.
	for(i = 0; i < distinct_array_size; i++)
	{
		for(j = 0; j < size; j++)
		{
			if(distinct_occurence[i] == user_num[j])
			{
				count++;
			}
		}

		printf("%d: %d times \n", distinct_occurence[i],count);
		count = 0;
	}

	return 0;
}

// Driver Code
int main()
{
	// Taking the size of the array as input.
	int size;
	do
	{
		printf("Enter the size : ");
		scanf("%d", &size);
	} while(size < 5);

	// Function call
	frequency_calculator(size);

	return 0;
}
