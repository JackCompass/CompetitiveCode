#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int a,b;
	map<int, string> word;
	word.insert({1,"one"});
	word.insert({2,"two"});
	word.insert({3,"three"});
	word.insert({4,"four"});
	word.insert({5,"five"});
	word.insert({6,"six"});
	word.insert({7,"seven"});
	word.insert({8,"eight"});
	word.insert({9,"nine"});
	cin >> a ;
	cin >> b ;
	cin.ignore();
	for (auto i = word.find(a); i != word.find(b + 1); ++i)
	{
		cout << i->second << endl;
	}
	for (auto i = 10; i <= b; ++i)
	{
		if (i % 2 == 0)
		{
			cout << "even" << endl;
		}
		else 
		{
			cout << "odd" << endl;
		}
	}

}