#include <iostream>
#include <list>
using namespace std;

int N, K;
string s;

int main(void) {
	cin >> N;

	list<char>::iterator key;
	list<char> password;

	for(int i=0; i< N; i++){
		cin >> s;

		password.clear();
		key = password.begin();

		for(int j = 0; j < s.length(); ++j){
			if(s[j] == '<'){
				if(key != password.begin()) key--;
			}

			else if(s[j] == '>'){
				if(key != password.end()) key++;
			}

			else if(s[j] == '-'){
				if(key != password.begin()) key = password.erase(--key);
			}
			else{
				key = password.insert(key, s[j]);
				key++;
			}
		}
		for(char x : password) cout << x;
		cout << endl;
	}
	return 0;
	
}
