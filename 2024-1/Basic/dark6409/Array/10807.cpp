#include <iostream>
using namespace std;

int main() {
  int n,v; cin>>n;
  int a[101]={};
  for(int i=0; i<n; i++)
    cin >> a[i];
  cin >> v;
  int c=0;
  for(int i=0; i<n; i++){
    if(a[i]==v) c++;
  }
  cout << c;
}
