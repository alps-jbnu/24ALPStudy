#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() 
{
    fastio;

    int number[10] = {};
    int A, B, C; cin >> A >> B >> C;

    int n = A * B * C;
    while (n != 0) 
    {
        number[n % 10]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) cout << number[i] << '\n';
}
