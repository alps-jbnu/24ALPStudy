#include<iostream>

int main() {
	std::string S; // 단어 S
	std::cin >> S;

	int alp[26] = { 0, }; // 알파벳 개수 담는 배열

	for (int i = 0; i < S.length(); i++)
	{
		alp[S[i] - 'a'] = alp[S[i] - 'a'] + 1;//s라는 배열을 돌면서 아스키코드를 활용하여서 연산 +1은 기존의 개수에서 확인된 갯수를 증가시키는 것이다. 
	}

	for (int i = 0; i < 26; i++)
	{
		std::cout << alp[i] << ' ';
	}

	return 0;
}
