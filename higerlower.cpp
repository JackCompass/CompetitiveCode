#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{	
	string t = "agbhcdg", s = "abc";
	int count = 0;
	for (auto i : t)
		if (i == s[count])
			count++;
	return count == s.length();

}