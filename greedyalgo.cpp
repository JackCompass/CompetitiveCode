#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Item
{
	int value, weight;
	// constructor
	Item(int value, int weight) : value(value), weight(weight){}
};

bool compare(struct Item a, struct Item b)
{
	double x = a.value / a.weight;
	double y = b.value / b.weight;
	return x > y;
}

int greeady_approach( Item arr[], int size, int weight)
{
	sort(arr, arr + size, compare);
	// For printing the sorted order.
	// for (int i = 0; i < size; i++)
	// {
	// 	cout << arr[i].value << "  " << arr[i].weight << endl;
	// }

	double current_weight = 0;
	double current_value = 0;

	for (int i = 0; i < size; ++i)
	{
		if (current_weight + arr[i].weight < weight)
		{
			current_weight += arr[i].weight;
			current_value += arr[i].value;
		}
		else
		{
			// taking fraction part into consideration
			int remain = weight - current_weight;
			current_value += arr[i].value * ((double)remain / arr[i].weight);
			break;
		}
	}
	return current_value;
	
}

int main()
{
	Item arr[] = {{60, 10}, {120, 30}, {100, 20}};
	int size = sizeof(arr) / sizeof(arr[0]);
	int weight = 50;
	cout << greeady_approach(arr, size, weight) << endl;
	return 0;
}