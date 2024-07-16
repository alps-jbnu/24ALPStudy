#include<stdio.h>

int main() {
	int num[10] = { NULL }, room_num = 0, max = 0;
	scanf("%d", &room_num);
	while (room_num != 0) {
		num[room_num % 10]++;
		room_num = room_num / 10;
	}
	if ((num[6] + num[9]) % 2 == 0) {
		num[6] = (num[6] + num[9]) / 2;
		num[9] = num[6];
	}
	else
		num[6] = (num[6] + num[9]) / 2 + 1, num[9] = num[6];
	for (int i = 0; i < 10; i++) {
		max = num[i] > max ? num[i] : max;
	}
	printf("%d", max);
	return 0;
}
