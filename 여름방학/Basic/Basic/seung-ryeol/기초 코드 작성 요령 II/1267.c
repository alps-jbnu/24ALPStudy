#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main(void)
{
	int a = 0; //케이스 개수
	int b[21] = { 0, }; //케이스
	int Ysum = 0; //영식 핸드폰 값
	int Msum = 0; //민수 핸드폰 값
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &b[i]);  // 케이스 입력
	}
	for (int j = 0; j < a; j++) {
		Ysum = Ysum + b[j] / 30 + 1;
		Msum = Msum + b[j] / 60 + 1;
	}
	Ysum = Ysum * 10;
	Msum = Msum * 15;
	if (Ysum > Msum) {
		printf("M %d", Msum);
	}
	else if (Ysum < Msum) {
		printf("Y %d", Ysum);
	}
	else {
		printf("Y M %d", Msum);
	}
	return 0;
}
