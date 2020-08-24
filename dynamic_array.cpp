#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> vect;
	int n, q, size, user_num, x, y;
	cin >> n >> q;
	for (auto i = 0; i < n; ++i)
	{
		cin >> size;
		vector<int> ivec;
		for (auto j = 0; j < size; ++j)
		{
			cin >> user_num ;
			ivec.push_back(user_num);
		}
		vect.push_back(ivec);
	}
	for (auto j = 0; j < q; ++j)
	{
		vector<int> qect;
		for (auto i = 0; i < 2; ++i)
		{
			cin >> user_num;
			qect.push_back(user_num);
		}
		vect.push_back(qect);
	}
	for (auto i = 0; i < q; ++i)
	{
		x = vect[n+i][0];
		y = vect[n+i][1];
		cout << vect[x][y] << endl;
	}
}