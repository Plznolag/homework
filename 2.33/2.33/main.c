#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e, cost;
	printf("�п�J�@��Ѫ��`���{��\n");
	scanf("%f", &a);
	printf("�п�J�T�o�@����/�[�ڦh�ֿ�\n");
	scanf("%f", &b);
	printf("�п�J�����@����/�[�گ��p�h�֤���\n");
	scanf("%f", &c);
	printf("�п�J�@�Ѫ������O\n");
	scanf("%f", &d);
	printf("�п�J�@�Ѫ��q��O(�L���O)\n");
	scanf("%f", &e);
	cost = (a / c)*b + d + e;
	printf("�A�@���`��O�O %1.1f\n", cost);
	system("Pause");
	return 0;
}