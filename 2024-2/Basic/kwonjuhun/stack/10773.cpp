#include <iostream>
#include <stack>
using namespace std;

int main() {
    int k, tmp, result = 0;
    stack<int> s;

    cin >> k;

    while (k--) {
        cin >> tmp;
        if (tmp == 0) s.pop();
        else s.push(tmp);
    }

    while (!s.empty()) {
        result += s.top();
        s.pop();
    }

    cout << result << endl;
    return 0;
}
