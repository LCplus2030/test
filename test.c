#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*****************\n");
	printf("*****1. play ****\n");
	printf("*****0. exit ****\n");
	printf("******************\n");

}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ʵ����Ϸ��
			break;
		case 0:
			printf("��Ϸ����,�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (input);

}
void game()
{
	char mine[ROWS][COLS] = { 0 };//����ȫ����ʼ��Ϊ'0'
	char show[ROWS][COLS] = { 0 };

	InitBoard(mine, ROWS, COLS, '0');// 
	InitBoard(show, ROWS, COLS, '*');//

	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	SetBoard(mine, ROWS, COLS, COL);
    
	FidBoard(mine, ROWS, COLS);

}



int main()
{
	int intput = 0;
	srand(unsigned int)time(NULL);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		}
		while (intput);

		return 0;
	}