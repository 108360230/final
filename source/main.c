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
		printf("請選擇遊玩(1)或結束(2)");
		scanf_s("%d", &chioce);
		if (chioce == 2)
			break;
		if (chioce == 1)
		{
			int a = 0;
			x = rand() % 10000;
			printf("請猜一個一個數字範圍1~9999，會根據你猜的數字給予適當的回應，如果你猜一個數字位置和數值都對就會得到1A，兩個就是2A，以此類推:\n");
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
					printf("恭喜答對\n");
					break;
				}
				printf("%dA\n", a);
				printf("請繼續猜下一個數字\n");
			}
		}
	}
	system("pause");
	return 0;
}