#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
    int N, K; cin >> N >> K;
    list<int> ls;

    for (int i = 1; i <= N; i++) ls.push_back(i);

    cout << "<";
    auto t = ls.begin();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K - 1; j++)
        {
            t++;
            if (t == ls.end()) t = ls.begin();
        }

        if (ls.size() != 1) cout << *t << ", ";
        else cout << *t;
        
        t = ls.erase(t);
        if (t == ls.end()) t = ls.begin();
    }
    cout << ">";
}
