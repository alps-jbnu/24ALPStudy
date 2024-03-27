#include <iostream>
using namespace std;
 
int main(void) {
 
	int count[10] = {};
	int a, b, c;
 
	cin >> a >> b >> c;
	int resultof = a * b * c;
 
 while(resultof != 0) {
		count[resultof % 10]++;	// result에서 나머지 10을 통해 자릿수를 얻어 인덱스로 활용
		resultof /= 10;			//  매 회 자릿수를 줄이기 위해 10을 나눈다.
	}
 for (int i=0;i<10;i++) {
		cout << count[i] << "\n";
	}
	return 0;
}
 
