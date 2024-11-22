#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
int n;
long long ans;

int main() {
    cin >> n;
    long long h;
    
    while (n--) {
        cin >> h;
        while (!s.empty() && s.top() <= h) s.pop();

        ans += s.size();
        s.push(h);
    }

    cout << ans;

    return 0;
}
