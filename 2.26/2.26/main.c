#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num1, num2 ,a;

	scanf("%d%d", &num1, &num2);

	
	a=num1%num2;
	if (a!=0)
	{
		printf("%d ���O %d ������",num1, num2);
	}
	else
	{
		printf("%d �O %d ������ ", num1, num2);
	}
	
	system("pause");
	return 0;
}