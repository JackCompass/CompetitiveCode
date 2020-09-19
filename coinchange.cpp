#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int size, int amount)
{
	int table[size][amount+1];
	int x , y, res;
	for( auto i = 0; i < size ; i++)
		table[i][0] = 1;
	for (auto i = 0; i < size; i++)
		{
			for (auto j = 1; j < amount + 1; j++)
			{
				x = (i > 0)? table[i-1][j] : 0;
				y = (j - arr[i] >= 0)? table[i][j - arr[i]] : 0;
				table[i][j] = x + y;
			}
		}
	return table[size-1][amount];

}


int main()
{
	int arr[] = {1,2,3};
	int size = sizeof(arr)/ sizeof(arr[0]);
	int amount = 4;
	cout << count(arr, size, amount) << endl;
	return 0;
}