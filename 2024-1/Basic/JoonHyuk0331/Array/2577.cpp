#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int mem[10]={0,};
	int num1, num2, num3;
	string str_number;

	cin >> num1 >> num2 >> num3;
	str_number = to_string(num1 * num2 * num3);//곱한 값 n에 넣기
	for (char c : str_number) mem[c - 48]++;
	for (int i:mem) cout << i << '\n';
}
