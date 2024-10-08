#include <bits/stdc++.h>
using namespace std;
int max(int n[], int len){
    int max = 0;
    for(int i = 0; i < len; i++){
        if (n[i] > max) max = n[i];
    }
    return max;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    int cnt[10] = {};
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if (str[i] == '9' || str[i] == '6'){
            if (cnt[6] == cnt[9]) cnt[6]++;
            else cnt[9]++;
        }
        else cnt[str[i] - '0']++;
    }
    cout << max(cnt, 10);
    return 0;
}
