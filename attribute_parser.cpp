#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string scrub(string word)
{
	char ch;
	string clear_word = "";
	for (auto i = 0; i < word.size(); ++i)
	{
		ch = word[i];
		if (isalnum(ch))
		{
			clear_word += ch;
		}
		
	}
	return clear_word;
}

int main()
{
	int N, Q, p1, flag = 0;
	vector<string> vect;
	string s, t, tag, attribute, match, word;
	cin >> N >> Q;
	cin.ignore();
	for (auto i = 0; i < N+Q; i++)
	{	
		getline(cin, s);
		vect.push_back(s);
	}
	for (auto i = 0; i < Q; ++i)
	{
		s = vect[N+i];
		p1 = s.find('~');
		tag = s.substr(p1-4, 4);
		attribute = s.substr(p1+1);
		for (auto j = 0; j < N; ++j)
		{
			t = vect[j];
			match = t.substr(1, 4);
			if (match == tag)
			{
				stringstream ss(t);
				while(!ss.eof())
				{
					ss >> word;
					if (word == attribute)
					{
						ss >> word;
						ss >> word;
						word = scrub(word);
						flag = 1;
						cout << word << endl;
						break;
					}
				}

			}
		}

		if(flag == 0)
		{
			cout << "Not Found!" << endl;
		}
		flag = 0;

	}

	return 0;
}