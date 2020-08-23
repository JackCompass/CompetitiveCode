#include <iostream>
using namespace std;
void abosulte_calcualtion(int* a, int* b)
{
	*a = *a + *b;
	*b = abs((*a - *b) - *b);
}
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cin.ignore();
	abosulte_calcualtion(&a, &b);
	cout << a << "\n" << b << endl;
	return 0;
}