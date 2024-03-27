#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int n, k;
    vector<int> v;
    queue<int> q;
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        q.push(i);
    }
    while(!q.empty()){
        for (int i = 0; i < k-1; i++){
            q.push(q.front()); // 자기 차례가 아닌 경우 수를 뒤로 보냄
            q.pop();
        }
        v.push_back(q.front());//차례 도달 시
        q.pop();
    }
    cout << "<";
    for (int i = 0; i < n-1;i++){
        cout << v[i] << ", ";
    }
    cout << v[n - 1] << ">";
    return 0;
}
