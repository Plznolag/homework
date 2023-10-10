#include <stdio.h>

int main()
{
	int a, b, c, max, min;
	scanf("%d %d %d", &a, &b, &c);

	if (b > a && b > c)
	{
		max = b;
		if (a > c)
			min = c;
		else if (c > a)
			min = a;
	}
	else if (a > b && a > c)
	{
		max = a;
		if (b > c)
			min = c;
		else if (c > b)
			min = b;
	}
	else if (c > b && c > a)
	{
		max = c;
		if (b > a)
			min = a;
		else if (a > b)
			min = b;
	}
	printf("最大值%d\n", max);
	printf("最小值%d\n", min);

	/*第二輪判斷*/
	scanf("%d %d %d", &a, &b, &c);
	if (b > a && b > c)
	{
		max = b;
		if (a > c)
			min = c;
		else if (c > a)
			min = a;
	}
	else if (a > b && a > c)
	{
		max = a;
		if (b > c)
			min = c;
		else if (c > b)
			min = b;
	}
	else if (c > b && c > a)
	{
		max = c;
		if (b > a)
			min = a;
		else if (a > b)
			min = b;
	}
	printf("最大值%d\n", max);
	printf("最小值%d\n", min);

	return 0;
}

