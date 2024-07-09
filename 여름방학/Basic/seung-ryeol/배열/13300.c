#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> 
#include<string.h> 

int main(void)
{
    int N, K;
    int s, y;
    int room = 0;
    int num = 0;
    int girl[6] = { 0, };
    int boy[6] = { 0, };
    
    scanf("%d %d", &N, &K);
    
    for (int i = 0; i < N; i++) { // 남학생, 여학생 학년 별 수 배열 만들기
        scanf("%d %d", &s, &y);
        if (s == 0) {
            girl[y - 1]++;
        }
        else {
            boy[y - 1]++;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        if (girl[i] <= K) { // 만약 학생의 수가 0이 아니고 최대 인원 수 미만일 경우, 방 1개 추가
            if (girl[i] == 0) {
                continue;
            }
            room++;
        }
        else { // 만약 학생의 수가 최대 인원 수 보다 많을 경우, 변수에 학생 수 저장, 0 이하가 될때까지 K빼주기 
            num = girl[i];
            while (num > 0) {
       
                num = num - K;
                room++;
            }

        }
    }
    for (int i = 0; i < 6; i++) {
        if (boy[i] <= K) {
            if (boy[i] == 0) {
                continue;
            }
            room++;
        }
        else {
            num = boy[i];
            while (num > 0) {
                
                num = num - K;
                room++;
            }
        }
    }
    printf("%d", room);
    return 0;
}
