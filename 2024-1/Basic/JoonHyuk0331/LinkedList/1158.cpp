#include <cstdio>
#include <queue>
 
using namespace std;
 
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
 
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
 
    printf("<");
    while (!q.empty()) {
        for (int i = 0; i < k-1; i++) {
            q.push(q.front());
            q.pop();
        }
        if (q.size() == 1) {
            printf("%d>", q.front());
            q.pop();
        }
        else {
            printf("%d, ", q.front());
            q.pop();
        }
    }
    return 0;
}
