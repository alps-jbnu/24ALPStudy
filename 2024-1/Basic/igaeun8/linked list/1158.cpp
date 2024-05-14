#include <iostream>
#include <list>
using namespace std;

int N, K;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> K;

  list<int> L;

  // 1~N 까지의 숫자 리스트에 추가
  for (int i = 1; i <= N; i++) L.push_back(i); //리스트 끝에 추가
  list<int>::iterator t = L.begin(); // 리스트 앞에 접근

  cout << "<";

  while (L.size()) {
    for (int i = 1; i < K; i++) {
      if (++t == L.end()) { //현재 인덱스의 다음 요소가 리스트 끝이면
        t = L.begin(); //처음하고 연결해줌
        continue;
      }
    }
    if (L.size() == 1) //리스트에 요소가 하나 남으면
      cout << *t;
    else
      cout << *t << ", ";

    t = L.erase(t); 
    // 삭제한 원소 자리가 이미 end인 경우 begin으로 보내줌
    t = (t == L.end()) ? L.begin() : t;
  }

  cout << ">";
}
