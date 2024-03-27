#include <iostream>
#include <vector>
#include <queue>//FIFO(선입선출)
using namespace std;
int main(){
    int n, k;
    vector<int> v;//데이터를 저장할 곳
    queue<int> q;
    cin >> n >> k;//규칙 저장하기
    for (int i = 1; i <= n; i++){
        q.push(i);//i번을 돌면 q에 숫자 삽입(참고할 queue 만들어두기)
    }
    while(!q.empty()){//q가 비어있지 않을 경우->큐가 더이상 비어있지 않을 때까지
        for (int i = 0; i < k-1; i++){
            q.push(q.front()); // 자기 차례가 아닌 경우 수를 뒤로 보냄
            q.pop();//->해당되지 않을 때 숫자를 뒤로 보내고 다음 숫자로 넘어가기
        }
        v.push_back(q.front());//차례 도달 시->데이터 저장공간에 순서대로 배치
        q.pop();//저장시킨 숫자 없애기
    }
    cout << "<";
    for (int i = 0; i < n-1;i++){
        cout << v[i] << ", ";
    }
    cout << v[n - 1] << ">";
    return 0;
}
