#include <stdlib.h>
#include <stdio.h>
#include<time.h>

void game1();
void game2();

int main(void)
{
	int chioce;
	int x;
	int ans;
	srand(time(NULL));
	while (1)
	{
		printf("�w��Ө�Ʀr���z�C���A�п�ܹC�� 1A2B(1) �׷��K�X(2) �Ϊ�(3)���}");
		scanf_s("%d", &chioce);
		if (chioce == 1)
			game1();
		if (chioce == 2)
			game2();
		if (chioce == 3)
			break;
	}
	system("pause");
	return 0;
}
void game1()
{
	int c = 0;
	int ans;
	int x, q, w, r, t;
	do
	{
		 x = rand() % 10000;
		 q = x / 1000;
		 w = ((x - (x / 1000) * 1000)) / 100;
		 r = ((x - (x / 100) * 100)) / 10;
		 t = ((x - (x / 10) * 10)) / 1;
	} while (q == w || q == r || q == t || w == r || w == t || r == t);

	printf("�вq�@�ӥ|���(�B�Ʀr������)�A�|�ھڧA�q���Ʀr�����A���^��\n�p�G�A�q�@�ӼƦr��m�M�ƭȳ���N�|�o��1A�A��ӴN�O2A�A�p�G�@�ӼƭȦ��X�{���O��m���~�N�|�o��1B�A�H������:\n");
	//printf("%d\n", x); 
	while (1)
	{
		int a = 0;
		int b = 0;
		
		scanf_s("%d", &ans);
		if (x / 1000 == ans / 1000)
			a += 1;
		if (x / 1000 != ans / 1000)
		{
			if (x / 1000 == ((ans - (ans / 1000) * 1000)) / 100 || x / 1000 == ((ans - (ans / 100) * 100)) / 10 || x / 1000 == ((ans - (ans / 10) * 10)) / 1)
				b += 1;
		}

		if (((x - (x / 1000) * 1000)) / 100 == ((ans - (ans / 1000) * 1000)) / 100)
			a += 1;
		if (((x - (x / 1000) * 1000)) / 100 != ((ans - (ans / 1000) * 1000)) / 100)
		{
			if (((x - (x / 1000) * 1000)) / 100 == ans / 1000 || ((x - (x / 1000) * 1000)) / 100 == ((ans - (ans / 100) * 100)) / 10 || ((x - (x / 1000) * 1000)) / 100 == ((ans - (ans / 10) * 10)) / 1)
				b += 1;
		}

		if (((x - (x / 100) * 100)) / 10 == ((ans - (ans / 100) * 100)) / 10)
			a += 1;
		if (((x - (x / 100) * 100)) / 10 != ((ans - (ans / 100) * 100)) / 10)
		{
			if (((x - (x / 100) * 100)) / 10 == ans / 1000 || ((x - (x / 100) * 100)) / 10 == ((ans - (ans / 1000) * 1000)) / 100 || ((x - (x / 100) * 100)) / 10 == ((ans - (ans / 10) * 10)) / 1)
				b += 1;
		}

		if (((x - (x / 10) * 10)) / 1 == ((ans - (ans / 10) * 10)) / 1)
			a += 1;
		if (((x - (x / 10) * 10)) / 1 != ((ans - (ans / 10) * 10)) / 1)
		{
			if (((x - (x / 10) * 10)) / 1 == ans / 1000 || ((x - (x / 10) * 10)) / 1 == ((ans - (ans / 1000) * 1000)) / 100 || ((x - (x / 10) * 10)) / 1 == ((ans - (ans / 100) * 100)) / 10)
				b += 1;
		}
		c += 1;
		if (x == ans)
		{
			printf("���ߵ���\n");
			printf("�`�@�q�F%d��\n", c);
			break;
		}
		
		printf("%dA%dB\n", a, b);
		printf("���~��q�U�@�ӼƦr\n");
	}
}

void game2()
{
	int a, b;
	int i = 1;
	int c = 0;

	printf("�׷��K�X\n");
	srand((unsigned)time(NULL));
	b = rand() % 10000;

	while (1)
	{
		
		printf("��J�@�ӼƤ���0~9999�G\n");
		scanf_s("%d", &a);

		if (a < b)
		{
			printf("�A�j�@�I\n");
		}
		if (a > b)
		{
			printf("�A�p�@�I\n");
		}
		c += 1;
		if (a == b)
		{
			printf("���ߵ���!!\n");
			printf("�`�@�q�F%d��\n", c);
			break;
		}
		
	}
}