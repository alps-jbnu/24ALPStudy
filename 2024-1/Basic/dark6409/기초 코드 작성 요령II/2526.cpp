#include <iostream>
using namespace std;

int main() {
  int n[9]={0,};
  for(int i=0; i<9; i++)
    cin >> n[i];
  int max=0, max_i=0;
  for(int i=0; i<9; i++){
    if(n[i]>max) {
      max = n[i];
      max_i = i;
    }
  }
  cout << max << endl << max_i+1;
}
