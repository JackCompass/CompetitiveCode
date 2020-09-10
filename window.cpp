#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void count_distinct(int arr[], int size, int window)
{
	unordered_map<int, int> mapper;

	for (auto i = 0; i < (size - window + 1); ++i)
	{
		int count = 0;
		for (auto j = i; j < window + i; ++j)
		{
			if (mapper.count(arr[j]))
				continue;
			else
				{
					count++;
					mapper[arr[j]] += 1;
				}
		}
		cout << "Window Count : " << count << endl;
		mapper.clear();
	}
}

int main()
{
	int arr[] = {1, 2, 4, 4};
	int size = sizeof(arr) / sizeof(int);
	count_distinct(arr, size, 2);
	return 0;
}