#include <iostream>
#include <cstring>
#include <list>
using namespace std;

// auto 키워드를 사용하면 초깃값의 형식에 맞춰 선언하는 인스턴스(변수)의 형식이 '자동'으로 결정된다

int i;

int main() {
  string str; cin>>str;  // 처음 입력되어있는 문자열
  list<char> ls;  // 문자열 저장과 명령어 실행할 곳
  for(auto c : str) ls.push_back(c); // str을 ls에 하나씩 입력
  auto cs = ls.end(); // 커서 최초 위치가 list 맨 뒤
  
  int n; cin>>n; // 명령어 개수
  while(n--){
    char order; cin>>order;  // 명령어
    
    if(order=='P'){
      char c; cin >> c;
      ls.insert(cs, c); // 커서 위치에 c를 삽입
    }
    else if(order=='L'&& cs != ls.begin()) cs--;
    else if(order=='D'&& cs != ls.end()) cs++;
    else if(order=='B'&& cs != ls.begin()){
      cs--;
      cs = ls.erase(cs);
      /*
       cs가 가리키는 원소를 삭제
       삭제한 원소의 다음 원소를 가리키는 iterator를 반환
      */
    }
  }

  for(auto c : ls)  cout<<c;
}
