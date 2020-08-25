#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b;
	char ch;
	cin >> a ;
	cin.ignore();
	cin >> b;
	cin.ignore();
	cout << a.size() << " " << b.size() << endl;
	cout << a+b << endl;
	ch = a[0];
	a[0] = b[0];
	b[0] = ch;
	cout << a << " " << b << endl;
	return 0;
}