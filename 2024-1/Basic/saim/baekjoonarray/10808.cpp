#include <iostream>
using namespace std;


int main() {
  int Array[26] = {0};
  string word; 
  cin >> word;
  
  for (int i=0; i < word.length(); i++) { 
    Array[int(word[i])-97]++;
  }
  for (int i = 0; i < 26; i++) { 
    cout << Array[i] << ' ';
  }
}
