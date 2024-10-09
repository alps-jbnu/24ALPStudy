#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	
	queue<int> q;
    for (int i = 1; i <= N; ++i) {
        q.push(i);
    }
    
    vector<int> result;
    
    while (!q.empty()) {
        for (int i = 0; i < K - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
        result.push_back(q.front());
        q.pop();
    }
    
    cout << "<";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << ">" << endl;
    
    return 0;
}
