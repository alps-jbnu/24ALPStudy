#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N;
int M;
int arr1[500000];
int arr2[500000];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> arr1[i];
  cin >> M;
  for (int i = 0; i < M; i++)
    cin >> arr2[i];
  sort(arr1, arr1 + N);
  for (int i = 0; i < M; i++)
    cout << binary_search(arr1, arr1 + N, arr2[i]) << ' ';

  return 0;
}
