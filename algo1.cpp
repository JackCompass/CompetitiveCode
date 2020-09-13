#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double greeady_approach(double values[], double weight[], int wgt, int size)
{
	double max_ratio = 0;
	int x;
	for (int i = 0; i < size; ++i)
	{
		if (values[i] / weight[i] > max_ratio)
			{
				max_ratio = values[i] / weight[i];
				x = i;
			}
	}
	return ((wgt / weight[x]) * values[x]);

}

int main()
{
	double values[] = {14, 27, 44, 19 };
	double weight[] = {6, 7, 9, 8};
	int size = sizeof(values)/ sizeof(values[0]);
	int wgt = 50;
	cout << greeady_approach(values, weight, wgt, size) << endl; 
	return 0;
}