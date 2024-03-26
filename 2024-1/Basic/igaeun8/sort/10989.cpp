#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

/* sort 알고리즘 시간 초과 나오는..
-> 개수 정렬 O(n)인데 입력 값이 무한히 나오면 답 없는... */
		   
int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int arr[10001] = {0};
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		arr[input]++;
	}
	

	for (int i = 0; i < 10001; i++) // 범위를 지정헤줘야 오류가 안 남
	{
		for(int j = 0; j < arr[i]; j++)
			cout << i <<"\n";
	}

	return 0;
}
