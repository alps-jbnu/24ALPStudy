#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() 
{
    fastio;

    int N; cin >> N;
    int num[10] = {};

    while (N != 0)
    {
        num[N % 10]++;
        N /= 10;
    }

    num[6] = (num[6] + num[9] + 1) / 2;
    cout << *max_element(num, num + 9);
}
