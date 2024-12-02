#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N;
int M;
int arr1[500000];
int arr2[500000];
vector<int> arr3;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  cin >> M;
  for (int i = 0; i < N; i++)
    cin >> arr1[i];
  for (int i = 0; i < M; i++)
    cin >> arr2[i];
  sort(arr1, arr1 + N);
  sort(arr2, arr2 + M);
  for (int i = 0; i < N; i++)
    if(!binary_search(arr2, arr2 + M, arr1[i]))  arr3.push_back(arr1[i]);

  cout << arr3.size() << '\n';
  for (int i = 0; i < arr3.size(); i++)
    cout << arr3[i] << ' ';
  return 0;
}
