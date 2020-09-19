#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s = "abc";
	vector< vector<int>> counter;
	int start = 0, end = 0;
	int count = 1;
	for (auto i = 1; i < s.length(); ++i)
	{
		if (s[i] == s[i-1])
			count++;
		else
			{
				count = 1;
				if (start)
				{
					vector<int > vect;
					vect.push_back(start);
					vect.push_back(end);
					counter.push_back(vect);
				}
				start = 0;
				end = 0;
			}
		if (count >= 3)
		{
			if (!start)
				start = i - 2;
			end = i;
		}
	}
	for( auto i = 0; i < counter.size(); i++)
		{
			for( auto j = 0; j < counter[i].size(); j++)
				cout << counter[i][j] << " ";
			cout << endl;
		}

	return 0;

}