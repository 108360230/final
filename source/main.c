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
		printf("歡迎來到數字推理遊戲，請選擇遊玩 1A2B(1) 終極密碼(2) 或者(3)離開");
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

	printf("請猜一個四位數(且數字不重複)，會根據你猜的數字給予適當的回應\n如果你猜一個數字位置和數值都對就會得到1A，兩個就是2A，如果一個數值有出現但是位置錯誤就會得到1B，以此類推:\n");
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
			printf("恭喜答對\n");
			printf("總共猜了%d次\n", c);
			break;
		}
		
		printf("%dA%dB\n", a, b);
		printf("請繼續猜下一個數字\n");
	}
}

void game2()
{
	int a, b;
	int i = 1;
	int c = 0;

	printf("終極密碼\n");
	srand((unsigned)time(NULL));
	b = rand() % 10000;

	while (1)
	{
		
		printf("輸入一個數介於0~9999：\n");
		scanf_s("%d", &a);

		if (a < b)
		{
			printf("再大一點\n");
		}
		if (a > b)
		{
			printf("再小一點\n");
		}
		c += 1;
		if (a == b)
		{
			printf("恭喜答對!!\n");
			printf("總共猜了%d次\n", c);
			break;
		}
		
	}
}