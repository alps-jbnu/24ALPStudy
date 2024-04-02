#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int nArr[10]={0,};
  int a,b,c; cin>>a>>b>>c;
  int n=a*b*c;
  string s=to_string(n);

  for(int i=0; i<s.length(); i++)
    nArr[s[i]-'0']++;

  for(int i=0; i<10; i++)
    cout << nArr[i] << endl;
}
