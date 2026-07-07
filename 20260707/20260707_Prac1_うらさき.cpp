#include<iostream>
using namespace std;
void even(int ary[], int index);
void odd(int ary[], int index);
int main(void)
{
	int ary[10];
	cout << "10ŒÂ‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> ary[i];
	}
	cout << "‹ô”" << endl;
	even(ary, 10);
	cout << "Šï”" << endl;
	odd(ary, 10);

	return 0;

}

void even(int ary[], int index)
{
	for (int i = 0; i < index; i++)
	{
		if (ary[i] % 2 == 0)
		{
			cout << ary[i] << endl;
		}
	}
}

void odd(int ary[], int index)
{
	for (int i = 0; i < index; i++)
	{
		if (ary[i] % 2 != 0)
		{
			cout << ary[i] << endl;
		}
	}
}