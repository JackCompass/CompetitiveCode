#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void minimum(int arr[], int size, int k)
{
	sort(arr, arr + size);
	int back_size = size - 1;
	int min_time = arr[back_size];
	int current_time = 0;
	for (auto i = 0; i < back_size; ++i)
	{
		if ( current_time < (min_time * (k-1)))
		{
			current_time += arr[i];
		}
		else
		{
			min_time += arr[back_size - 1];
			back_size -= 1;
			i--;
		}
	}
	if ((min_time * (k-1)) < current_time)
		min_time += current_time - (min_time * (k-1));
	cout << "minimum time : " << min_time << endl;
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(arr) / sizeof(int);
	int k = 3;
	minimum(arr, size, k);
	return 0;
}