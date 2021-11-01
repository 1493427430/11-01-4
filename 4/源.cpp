#include<stdio.h> //陈杨 
int main() {
	float a, b, c, d;
	printf("速度（公里/小时）：");
	scanf("%f", &a);
	if (a <= 90)
		printf("速度正常");
	else if (a > 90 / 5 + 90 && a <= 135)
		printf("罚款：200元");
	else if (a > 135)
		printf("吊销驾照");
	else
		printf("罚款：0元");
	return 0;
}
