#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector< vector<int>> grid {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
	int row = grid.size();
	int perimeter = 0;
	for (auto i = 0; i < row; i++)
	{
		int col = grid[i].size();
		for (auto j = 0; j < col; j++)
		{
			if ( grid[i][j] == 1)
			{
				perimeter += 4;
				if (i-1 >= 0)
				{
					if (grid[i-1][j] == 1)
						perimeter --;
				}
				if (j-1 >= 0)
				{
					if (grid[i][j-1] == 1)
						perimeter --;
				}
				if (i+1 < row)
				{
					if (grid[i+1][j] == 1)
						perimeter --;
				}
				if (j+1 < col)
				{
					if (grid[i][j+1] == 1)
						perimeter --;
				}
			}
				
		}
	}
	cout << perimeter << endl;
	return 0;
}