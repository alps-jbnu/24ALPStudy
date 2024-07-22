#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n;
    long long m;
    long long a;
    cin >> n;
    cin >> m;
    deque<int> D;
    long long ans = 0;

    for (int i = 1; i <= n; i++) { 
        D.push_back(i); 
    }
    
    for (int i = 0; i < m; i++) {
        cin >> a;
        int x = find(D.begin(), D.end(), a) - D.begin(); // 덱 속의 a의 위치 찾기 
        while (D.front() != a) {
            
            if (x < D.size() - x) {

                D.push_back(D.front());
                D.pop_front();

            }
            else {

                D.push_front(D.back());
                D.pop_back();

            }

            ans++;
        }
        D.pop_front();
    }
    cout << ans;
        return 0;
    }
