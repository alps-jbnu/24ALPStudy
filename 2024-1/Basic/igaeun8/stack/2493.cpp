#include <iostream>
#include <stack>

using namespace std;

int N, K;
stack<pair<int, int>> st;
//pair를 사용하여 높이와 탑이 번호 지정
//stack ( { index, value } )

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N; //탑의 수

    for(int i=1;i<=N;i++) {
        cin >> K; //비교할 값

        if(st.empty()) { //비어있다면 push 후 0 출력
            st.push({i,K});
            cout << "0 ";
        }
        else {
            while(!st.empty()) {
                if(st.top().second > K) { //신호 수신 가능 시
                    cout << st.top().first<< " "; //index 출력
                    break;
                } else {
                    st.pop(); // 신호 수신 불가 시 pop
                }
            }
        if(st.empty()) cout << "0 "; //스택이 비면 0 출력

        st.push({i,K}); //스택에 push
        }

    }
}
