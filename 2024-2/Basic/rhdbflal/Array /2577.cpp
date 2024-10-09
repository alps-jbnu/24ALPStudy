#include <iostream>
#include <string>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	int num = A * B * C; 
	//세 수의 곱의 결과를 10으로 나누면서  그 나머지 확인하기
	int arr[10] = {};
	for(int i=num;i>0;i/=10) arr[i%10]++;

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;

	return 0;
}
