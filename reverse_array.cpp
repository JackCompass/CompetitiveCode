#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	int arr[n];
	for (auto i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (auto i = n - 1; i >= 0; --i) 
	{
		cout << arr[i] << " ";
	}
	return 0;
}