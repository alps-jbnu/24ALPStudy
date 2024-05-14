#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
    fastio;

    int freq[26] = {};
    string s1, s2; cin >> s1 >> s2;

    for (char c : s1) freq[c - 'a']++;
    for (char c : s2) freq[c - 'a']--;

    int cnt = 0;
    for (int i = 0; i < 26; i++) cnt += abs(freq[i]);
    
    cout << cnt;
}
