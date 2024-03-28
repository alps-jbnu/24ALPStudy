#include <iostream>
#include <cstring>
using namespace std;

int main() {
  string s; cin >> s;
  int alp[26]={0,};
  int i=0;
  for(i=0;i<s.size();i++)
    alp[s[i]-'a']++;

  for(i=0; i<26; i++)
    cout << alp[i] << " ";
}
