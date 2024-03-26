#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N; 
	bool T; 
	string str1, str2;
	int src[26], des[26];
	cin >> N;
	while (N--) {
		T = true; 
		
		for (int i = 0; i < 26; i++) {
			src[i] = 0;
			des[i] = 0;
		}
		
		cin >> str1 >> str2;
		
		if (str1.length() != str2.length()) { 
			T = false;
		}
		else {
			for (int i = 0; i < str1.length(); i++) {
				src[str1[i] - 'a']++;
				des[str2[i] - 'a']++;
			}

			for (int i = 0; i < 26; i++) {
				if (src[i] != des[i]) {
					T = false;
					break;
				}
			} 
		}
		
		if (T) {
			cout << "Possible" << endl;
		}
		else {
			cout << "Impossible" << endl;
		}		
	}
}
