#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, bmi;
	printf("輸入體重(kg)身高(m)");
	scanf("%f%f", &a, &b);
	bmi = a / (b*b);
	printf("你的BMI是 %2.1f \n" ,bmi );
	printf("體重過輕 BMI < 18.5\n");
	printf("正常 18.5<=BMI<24\n");
	printf("過重：24<=BMI<27\n");
	printf("輕度肥胖：27 <= BMI < 30\n");
	printf("中度肥胖：30 <= BMI < 35\n");
	printf("重度肥胖：BMI >= 35\n");
	system("pause");
	return 0;

}