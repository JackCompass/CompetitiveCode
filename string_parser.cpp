#include <stdio.h>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	// using stringstream in this program.
	string str;
	char ch;
	getline(cin, str);
	stringstream ss;
	int size = str.size();
	ss << str;
	str = "";
	while(size--) 
	{
		ss >> ch;
		if (ch == ',')
		{
			cout << str << endl;
			str.clear();
			continue;
		}
		str += ch;
	}
	cout << str << endl;
	return 0;


}