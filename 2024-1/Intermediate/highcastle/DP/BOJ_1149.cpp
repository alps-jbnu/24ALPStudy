#include<bits/stdc++.h>

using namespace std;

int house[1001][3];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, i;
	int cost[3];
	
	cin >> n;
	
	for(i = 1; i <= n; i++)
	{
		cin >> cost[0] >> cost[1] >> cost[2];
		//빨간색으로 칠했을 경우의 최솟값 
		house[i][0] = min(house[i-1][1], house[i-1][2]) + cost[0];
		//초록색으로 칠했을 경우의 최솟값 
		house[i][1] = min(house[i-1][0], house[i-1][2]) + cost[1];
		//파란색으로 칠했을 경우의 최솟값 
        house[i][2] = min(house[i-1][1], house[i-1][0]) + cost[2];
    }
    //마지막에는 다 넣어둘거기 때문에 거기서 최솟값 구하기. 
    cout << min(house[n][2], min(house[n][0], house[n][1]));
    
    return 0;
}
