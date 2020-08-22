#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
	int n;
	map<int,string> e_word;
	e_word.insert(pair<int, string>(1, "one"));
	e_word.insert(pair<int, string>(2, "two"));
	e_word.insert(pair<int, string>(3, "three"));
	e_word.insert(pair<int, string>(4, "four"));
	e_word.insert(pair<int, string>(5, "five"));
	e_word.insert(pair<int, string>(6, "six"));
	e_word.insert(pair<int, string>(7, "seven"));
	e_word.insert(pair<int, string>(8, "eight"));
	e_word.insert(pair<int, string>(9, "nine"));
	cin >> n;
	cin.ignore();
	if (n > 9)
	{
		cout << "Greater than 9" ;
	}
	else
	{
		for (auto itr = e_word.find(n); itr == e_word.find(n); ++itr) 
		{ 
        	cout << itr->second;
        }
	}


	return 0;

}