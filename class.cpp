#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Student
{
	int age;
	string first_name;
	string last_name;
	int standard;

	public :
	int set_method(int a, string f, string l, int s)
	{
		age = a;
		first_name = f;
		last_name = l;
		standard = s;
		return 0;
	}
	int get_age()
	{
		return age;
	}
	string full_name()
	{
		return (last_name + ", " + first_name);
	}
	int get_standard()
	{
		return standard;
	}
	string details()
	{
		stringstream ss;
		ss << age << ',' << first_name << ',' << last_name << ',' << standard;
		return ss.str();
	}
	
};

int main()
{
	Student s;
	int age, standard;
	string first_name, last_name;
	cin >> age;
	cin.ignore();
	getline(cin, first_name);
	getline(cin, last_name);
	cin >> standard;
	s.set_method(age, first_name, last_name, standard);
	cout << s.get_age() << endl;
	cout << s.full_name() << endl;
	cout << s.get_standard() << endl;
	cout <<endl << s.details() << endl;

	return 0;
}