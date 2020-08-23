# include <iostream>
using namespace std;

int greatest(int a, int b, int c, int d) 
{
	int max1 = 0, max2 = 0;
	(a > b) ? max1 = a : max1 = b;
	(c > d) ? max2 = c : max2 = d;
	(max1 > max2) ? max1 = max1 : max1 = max2;
	return max1;
}

int main()
{
	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin.ignore();
	cout << greatest(a, b, c, d);
}