#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int n; cin >> n;
  // 6,9를 하나로 봄. 하나로 카운팅 후 2로 나눈 나머지
  string s = to_string(n);
  int nArr[10]={0,};
  int max=0;
  for(int i=0; i<s.length(); i++){
    if(s[i] == '6') nArr[6]++;
    else if(s[i] == '9') nArr[9]++;
    else{
      nArr[s[i]-'0']++;
      if(max < nArr[s[i]-'0']) max = nArr[s[i]-'0'];
    }
  }
  n = nArr[6]+nArr[9];
  if((n/2)+(n%2) >= max)
    max = (n/2)+(n%2);
  cout << max;
}
