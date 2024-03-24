#include <iostream>
#include <algorithm>

using namespace std;
 
int main(int argc, const char *argv[]) {
 

	// 0으로 초기화
	int cnt[10] = {};
	int n;
 
	cin >> n;
 
 
	// 0이 될 때 까지 반복
	while(n != 0) {
		int x = n%10;	// n에서 나머지 10을 통해 자릿수를 얻어 인덱스로 활용
		n /= 10;		//  매 회 자릿수를 줄이기 위해 10을 나눈다.

		if(x==9) cnt[6]++;
		else cnt[x]++;
	}
 
	cnt[6] = (cnt[6]+1)/2; // 홀수일경우 대비하여 +1

	int max_cnt = 0;

	for(int i=0; i < 10; i++){
		max_cnt = max(max_cnt, cnt[i]);	
	}

	cout << max_cnt;

	return 0;
}
 
