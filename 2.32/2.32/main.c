#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, bmi;
	printf("��J�魫(kg)����(m)");
	scanf("%f%f", &a, &b);
	bmi = a / (b*b);
	printf("�A��BMI�O %2.1f \n" ,bmi );
	printf("�魫�L�� BMI < 18.5\n");
	printf("���` 18.5<=BMI<24\n");
	printf("�L���G24<=BMI<27\n");
	printf("���תέD�G27 <= BMI < 30\n");
	printf("���תέD�G30 <= BMI < 35\n");
	printf("���תέD�GBMI >= 35\n");
	system("pause");
	return 0;

}