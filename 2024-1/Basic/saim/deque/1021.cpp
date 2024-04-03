#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(void) {
   
    int n, m;
    cin >> n >> m;
    deque<int> DQ;
    for (int i = 1; i <= n; i++) DQ.push_back(i);
    int ans = 0;
    while (m--) {
        int t;
        cin >> t;
        int idx = find(DQ.begin(), DQ.end(), t) - DQ.begin();
        while (DQ.front() != t) {
            if (idx < DQ.size() - idx) {
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
            else {
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
            ans++;
        }
        DQ.pop_front();
    }
    cout << ans;
}
