#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int M, N;
int cnt = 0;
vector<int> arr1[100];  // input
vector<int> arr2[100];  // compressed
bool arr3[100]; // 쌍인지 확인

bool is_same(int f, int s) {
  for (int i = 0; i < N; i++)  {
    if (arr2[f][i] != arr2[s][i])  return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // input
  cin >> M >> N;
  int temp;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) { 
      cin >> temp;
      arr1[i].push_back(temp);
      arr2[i].push_back(temp);
    }
  }
  // compression
  for (int i = 0; i < M; i++) {
    // unique
    sort(arr1[i].begin(), arr1[i].end());
    arr1[i].erase(unique(arr1[i].begin(), arr1[i].end()), arr1[i].end());
    // rank
    for (int j = 0; j < N; j++) {
      arr2[i][j] = lower_bound(arr1[i].begin(), arr1[i].end(), arr2[i][j]) - arr1[i].begin();
    }
  }
  // count
  for (int i = 0; i < M; i++) {
    if (arr3[i])  continue;
    int exist = 0;
    for (int j = i + 1; j < M; j++) {
      if (::is_same(i, j))  {
        cnt++;
      }
    }
    cnt += exist;
  }

  // for (int i = 0; i < M; i++) {
  //   for(auto el : arr2[i])  {
  //     cout << el << ' ';
  //   }
  //   cout << '\n';
  // }
  std::cout << cnt;


  return 0;
}
