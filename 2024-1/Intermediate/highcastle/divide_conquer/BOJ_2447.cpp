#include<bits/stdc++.h>

using namespace std;

void star(int i, int j, int n)
{
	if((i / n) % 3 == 1 && (j / n) % 3 == 1) //가운데 비우게..기본 단위인 3*3을 기준으로 하여 내보내는..거임.
	{
		cout << " ";
	}
	else
	{
		if(n / 3 == 0)
		{
			cout << "*"; //이제 더이상 나눌 수 없을 때엔 별을 그림.
		}
		else
		{
			star(i, j, n / 3); // 3-> 9 -> 27 -> 81 이전 단계가 9개씩 반복됨(9면 9개의 구역으로 나뉜 3개가..)
		}
	}
}

int main(void)
{

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			star(i, j, n);
		}
		cout << "\n";
	}

	return 0;
}
