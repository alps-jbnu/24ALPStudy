#include <iostream>
using namespace std;

int main(){
    string s;
    int cnt[26] = {0};
    cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i++){
        cnt[s[i] - 97]++;
    }
    for(int i = 0; i < 26; i++){
        cout << cnt[i] << ' ';
    }
    return 0;
}
