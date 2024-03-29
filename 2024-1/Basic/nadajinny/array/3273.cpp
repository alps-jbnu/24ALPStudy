#include <iostream>

int num[100001];
int cnt[2000001];
int main(void) {
	
	int n, tmp, tot;
	std::cin >> n;//->입력할 변수의 개수 작성
	for (int i = 0; i < n; i++) {
		std::cin >> tmp;//->int배열로 선언하여 입력받은 변수 갯수만큼 반복문돌리기
		num[i] = tmp;//num 에 각 숫자 삽입
		cnt[tmp] = 1;
	}
	std::cin >> tot;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (tot - num[i] >= 0 && cnt[tot - num[i]] != 0 && tot - num[i] > num[i]) {//i<j조건도 넣어준다.중복 방지
			sum += 1;//->조건에 해당할 시, 조건만족 개수 작성
			//조건 풀이-> tot에서 숫자가 돌아갈 때 연산에 필요한 수 파악 -> 연산에 필요한 수의 작성 유무 파악->연산에 필요한 숫자가 계산하는 수보다 작으면 안된다.:::중복 방지
		}
	}
	std::cout << sum;
	return 0;
}
