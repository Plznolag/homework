#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e, cost;
	printf("請輸入一整天的總里程數\n");
	scanf("%f", &a);
	printf("請輸入汽油一公升/加侖多少錢\n");
	scanf("%f", &b);
	printf("請輸入平均一公升/加侖能行駛多少公里\n");
	scanf("%f", &c);
	printf("請輸入一天的停車費\n");
	scanf("%f", &d);
	printf("請輸入一天的通行費(過路費)\n");
	scanf("%f", &e);
	cost = (a / c)*b + d + e;
	printf("你一天總花費是 %1.1f\n", cost);
	system("Pause");
	return 0;
}