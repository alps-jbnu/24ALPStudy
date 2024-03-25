#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

/* sort 알고리즘
sort(시작 지점, 끝 지점)
시간 복잡도 최악 - O(n^2)
           최선 - O(nlogn)*/
		   
int main(int argc, char **argv)
{
	int N;
	int arr[1001];
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr, arr+N);

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}
