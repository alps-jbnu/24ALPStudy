#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
    fastio;
    
    int N; cin >> N;

    for (int i = 0; i < N; i++)
    {
        int freq[26] = {};

        string s1, s2; cin >> s1 >> s2;
        for (char c : s1) freq[c - 'a']++;
        for (char c : s2) freq[c - 'a']--;

        bool isPossible = true;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                isPossible = false;
                break;
            }
        }

        if (isPossible) cout << "Possible" << '\n';
        else cout << "Impossible" << '\n';
    }
}
