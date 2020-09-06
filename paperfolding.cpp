#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// Function takes a string (sequence) of input and convert 1 into 0
// and vice versa and than revese the whole pattern and return the new 
// string.
string change(string seq)
{
	string pattern;
	for (auto i = 0; i < seq.size(); ++i)
	{
		char ch = seq[i];
		if (ch == '0')
			pattern += "1";
		else
			pattern += "0";
	}
	// reverse the string.
	reverse(pattern.begin(), pattern.end()); 
	return pattern;
}

int main()
{
	// initailzing the patter for input 1.
	string pattern= "1";
	// user input
	int num;
	cin >> num;
	cin.ignore();
	// for finding the patter of nth number 
	// need to find the patter of n-1 th number 
	// so starting from the 1 number.
	for (auto i = 1; i < num ; ++i)
	{
		pattern = pattern + "1" + change(pattern);
	}
	// printing the output.
	cout << pattern << endl;
	return 0;
}