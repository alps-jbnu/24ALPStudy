#include <bits/stdc++.h>
using namespace std;

//수열 정보가 들어있는 arr배열에서
//n개 요소들에 대해
//합이 sum 이 되는 짝이 있는지 찾는다
int func(int arr[], int n,int sum) {
	int cnt = 0;
	int isoccured[2000001] = {};//발생여부 체크 배열
	for (int i = 0; i < n; i++) {//수열 첫번째 항목은 i=0,두번째는 i=1,..... 수열의
		if (sum - arr[i] < 0) continue; //합이 2인데 수열의 항목이 2보다 큰 경우 -1인덱스 값을 찾아 오류 발생하므로 방지하기
		if (isoccured[sum - arr[i]]) cnt++;//얘를 들어 합이 13이고 수열 첫번째 항목이 1 이라면
										//12 이 발생한 적 있는지 확인한다 isoccured[12]가 1인지 확인
		isoccured[arr[i]] = 1;
	}
	return cnt;
}

int main(void) {
	int arr[100001] = {};//수열을 넣을 배열
	int n;//테스트케이스개수
	int sum;
	cin >> n;
	for (int i = 0; i < n; i++) {//테스트케이스 개수만큼 실행
		cin >> arr[i];
	}
	cin >> sum;
	cout << func(arr, n, sum);
	return 0;
}
