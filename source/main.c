#include <stdlib.h>
#include <stdio.h>
#include<time.h>

int main(void)
{
	int chioce;
	int x;
	int ans;
	srand(time(NULL));
	while (1)
	{
		printf("�w��Ө�1A2B���C���A�п�ܹC��(1)�ε���(2)");
		scanf_s("%d", &chioce);
		if (chioce == 2)
			break;
		if (chioce == 1)
		{
			
			x = rand() % 10000;
			printf("�вq�@�Ӥ@�ӼƦr�d��1~9999�A�|�ھڧA�q���Ʀr�����A���^��\n�p�G�A�q�@�ӼƦr��m�M�ƭȳ���N�|�o��1A�A��ӴN�O2A�A�p�G�@�ӼƭȦ��X�{���O��m���~�N�|�o��1B�A�H������:\n");
			printf("%d\n", x);
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
				if (x == ans)
				{
					printf("���ߵ���\n");
					break;
				}
				printf("%dA%dB\n", a,b);
				printf("���~��q�U�@�ӼƦr\n");
			}
		}
	}
	system("pause");
	return 0;
}