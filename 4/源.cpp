#include<stdio.h> //���� 
int main() {
	float a, b, c, d;
	printf("�ٶȣ�����/Сʱ����");
	scanf("%f", &a);
	if (a <= 90)
		printf("�ٶ�����");
	else if (a > 90 / 5 + 90 && a <= 135)
		printf("���200Ԫ");
	else if (a > 135)
		printf("��������");
	else
		printf("���0Ԫ");
	return 0;
}
