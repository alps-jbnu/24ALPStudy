#include<iostream>
#include<string>

using namespace std;

int main() {
	
	int N; 
	bool is_possible; // 참 거짓을 판별하기 위한 변수
	string str1, str2; // 입력받을 문자열
	int src[26], des[26]; // 입력받은 문자열들의 알파벳 갯수 세기위한 배열들
	cin >> N;
	while (N--) {
		is_possible = true; // 변수 초기화
		for (int i = 0; i < 26; i++) {
			src[i] = 0;
			des[i] = 0;
		} //변수 초기화
		
		cin >> str1 >> str2;
		
		if (str1.length() != str2.length()) { // 두 문자열의 길이가 다를경우 실패
			is_possible = false;
		}
		else {
			for (int i = 0; i < str1.length(); i++) {
				src[str1[i] - 'a']++;
				des[str2[i] - 'a']++;
			} // 문자열의 해당 알파벳에 해당하는 인덱스를 올려준다.

			for (int i = 0; i < 26; i++) {
				if (src[i] != des[i]) {
					is_possible = false;
					break;
				}
			} // 반복문을 돌면서 하나라도 같지 않으면 실패
		}
		
		if (is_possible) {
			cout << "Possible" << endl;
		}
		else {
			cout << "Impossible" << endl;
		}		
	}
}
