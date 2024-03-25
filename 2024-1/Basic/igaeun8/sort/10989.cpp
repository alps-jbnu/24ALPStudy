#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

/* sort 알고리즘 시간 초과 나오는..*/
		   
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
	

	for (int i = 0; i < 10001; i++)
	{
		for(int j = 0; j < arr[i]; j++)
			cout << i <<"\n";
	}

	return 0;
}
