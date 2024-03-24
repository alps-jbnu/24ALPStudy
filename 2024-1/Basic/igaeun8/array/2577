#include <iostream>
 
using namespace std;
 
int main(int argc, const char *argv[]) {
 

	// 0으로 초기화
	int count[10] = {};
	int a, b, c;
 
	cin >> a >> b >> c;
 
	int res = a * b * c;
 
 
	// 0이 될 때 까지 반복
	while(res != 0) {
		count[res % 10]++;	// res에서 나머지 10을 통해 자릿수를 얻어 인덱스로 활용
		res /= 10;			//  매 회 자릿수를 줄이기 위해 10을 나눈다.
	}
 
	// 0 부터 9까지 count 배열을 출력 (foreach문 사용!!!!!!)
	for (int v : count) {
		cout << v << "\n";
	}
	return 0;
}
 
