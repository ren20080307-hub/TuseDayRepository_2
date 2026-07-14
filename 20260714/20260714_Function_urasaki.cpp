#include<iostream>
#include<ctime>
#include<cstdlib>
#include"20260714_Header_urasaki.h"
using namespace std;



int POINT(int point, int han)
{
	int hantei = han;
	int newpoint = point;
	
	if (hantei == 1)
	{
		newpoint += WIN_POINT;
	}
	else
	{
		newpoint = DROW_POINT;
	}


	return newpoint;
}

void GAME()
{
	srand((unsigned int)time(NULL));
	int pleyer = 0;
	int enemy = 1;
	int playerpoint = 0;
	int enemypoint = 0;
	int plyerserect;
	int enemyserect;
	int i;

	for (i = 0; i < COUNT_NUMBER; i++)
	{
		SETNUM[pleyer][i] = rand() % 51;
		SETNUM[enemy][i] = rand() % 51;
	}

	cout << "プレイヤーは、1～10番の中から番号を入力して数字を選択してください。\n"
		<< SETNUM[pleyer][COUNT_NUMBER] << endl;

	cin >> plyerserect;

	while (true)
	{
		if (plyerserect != SETNUM[pleyer][COUNT_NUMBER] && plyerserect == SERECTNUM[pleyer])
		{
			cin >> plyerserect;
		}
		else
		{
			SERECTNUM[pleyer] = plyerserect;
			break;
		}
	}

	enemyserect = rand() % SETNUM[enemy][COUNT_NUMBER];
	while (true)
	{
		if (enemyserect == SERECTNUM[enemy])
		{
			enemyserect = rand() % SETNUM[enemy][COUNT_NUMBER];
		}
		else
		{
			SERECTNUM[enemy] = enemyserect;
			break;
		}
	}

}