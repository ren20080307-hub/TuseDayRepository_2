#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_urasaki.h"
using namespace std;





void Run()
{
	cout << "“G‚Ì3Œ…‚Ì”Žš‚ð“–‚Ä‚Ü‚µ‚å‚¤" << endl;
	int i;
	int player[3];
	int enemy[3];
	int answer[3];
	int enemyserect[3];

	srand((unsigned int)time(NULL));
	while(true)
	{
		if (player[0] == player[1] || player[0] == player[2] || player[1] == player[2])
		{
			for(i=0;i<3;i++)
			{
				player[i] = rand() % 10;
			}	
		}
		else
		{
			cout << "‚ ‚È‚½‚Ì”Žš‚Í\n" << player[0] << player[1] << player[2] << endl;
			break;
		}
	}
	while (true)
	{
		if (enemy[0] == enemy[1] || enemy[0] == enemy[2] || enemy[1] == enemy[2])
		{
			for (i = 0; i < 3; i++)
			{
				enemy[i] = rand() % 10;
			}
		}
		else
		{
			break;
		}
	}
}