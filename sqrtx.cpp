#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int num = 25;
	long long int high = num, low = 1, middle;
	while (low <= high)
	{
		middle = (low + high) / 2;
		if (middle * middle == num)
			return 1;
		else if (middle * middle < num)
			low = middle + 1;
		else 
			high = middle - 1;
	}
	return 0;
}