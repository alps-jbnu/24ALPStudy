#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int seq[100000] = {};
bool occur[2000000] = {};

int main() 
{
    fastio;

    int n, x; 

    cin >> n;
    for (int i = 0; i < n; i++) cin >> seq[i];
    cin >> x;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (x > seq[i])
        {
            if (occur[x - seq[i]]) cnt++;
        }
        occur[seq[i]] = 1;
    }

    cout << cnt;
}
