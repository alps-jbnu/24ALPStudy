#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str1, str2;
	cin >> str1 >> str2;

	int cnt = 0;
	int size1 = str1.size();
	int size2 = str2.size();

	for (int i = 0; i < size1; i++) {
		if (str1[i] == 0) break;
		for (int j = 0; j < size2; j++) {
			if (str2[j] == 0) break;
			if (str1[i] == str2[j]) {
				str1[i] = '0';
				str2[j] = '0';
			}
		}
	}

	for (int i = 0; i < size1; i++) {
		if (str1[i] != '0') cnt++;
	}
	for (int i = 0; i < size2; i++) {
		if (str2[i] != '0') cnt++;
	}
	
	cout << cnt;
}
