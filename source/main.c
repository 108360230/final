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
		printf("�п�ܹC��(1)�ε���(2)");
		scanf_s("%d", &chioce);
		if (chioce == 2)
			break;
		if (chioce == 1)
		{
			int a = 0;
			x = rand() % 10000;
			printf("�вq�@�Ӥ@�ӼƦr�d��1~9999�A�|�ھڧA�q���Ʀr�����A���^���A�p�G�A�q�@�ӼƦr��m�M�ƭȳ���N�|�o��1A�A��ӴN�O2A�A�H������:\n");
			//printf("%d\n", x);
			while (1)
			{
				a = 0;
				scanf_s("%d", &ans);
				if (x / 1000 == ans / 1000)
					a += 1;
				if (((x - (x / 1000) * 1000)) / 100 == ((ans - (ans / 1000) * 1000)) / 100)
					a += 1;
				if (((x - (x / 100) * 100)) / 10 == ((ans - (ans / 100) * 100)) / 10)
					a += 1;
				if (((x - (x / 10) * 10)) / 1 == ((ans - (ans / 10) * 10)) / 1)
					a += 1;
				if (x == ans)
				{
					printf("���ߵ���\n");
					break;
				}
				printf("%dA\n", a);
				printf("���~��q�U�@�ӼƦr\n");
			}
		}
	}
	system("pause");
	return 0;
}