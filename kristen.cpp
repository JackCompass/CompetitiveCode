#include <iostream>
using namespace std;
class Students
{
	private :
	int scores[5];
	public :
	int input()
	{
		for (auto i = 0; i < 5; ++i)
		{
			cin >> scores[i];
		}
		return 0;
	}
	int TotalScore()
	{
		int total = 0;
		for (auto i = 0; i < 5; ++i)
		{
			total += scores[i];
		}
		return total;
	}
};

int main()
{
	int student_count, max, count = 0;
	cin >> student_count;
	Students student[student_count];
	for (auto i = 0; i < student_count; i++)
	{
		student[i].input();
	}
	max = student[0].TotalScore();
	for (auto i = 1; i < student_count; ++i)
	{
		if(max < student[i].TotalScore())
			count ++;
	}
	cout << count << endl;
	return 0;
}