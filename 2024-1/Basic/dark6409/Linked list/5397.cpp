#include <iostream>
#include <cstring>
#include <list>
using namespace std;

int main() {
  int n; cin >> n;

  while(n--){    
    string str; cin >> str;
    list<char> L;
    auto cs = L.end();
    for(auto c : str) {
      if(c=='-'){
        if(cs != L.begin()){
          cs--;
          cs = L.erase(cs);
        }
      }
      else if(c=='<'){
        if(cs != L.begin()) cs--;
      }
      else if(c=='>'){
        if(cs != L.end()) cs++;
      }
      else
        L.insert(cs, c);
    }
    for(auto c : L)  cout<<c;
    cout << endl;
  }
}
