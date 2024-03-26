#include <iostream>
using namespace std;

int a[1000001]={};
bool occur[2000001];
int n, x;

int main(void){
	cin >> n;
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	cin >> x;

	int ans = 0;

	// a1 + a2 = X -> a2 = X - a1
	for (int i = 0; i < n; i++) {
    	if(x-a[i] > 0 && occur[x-a[i]]) 
			ans++;
		occur[a[i]] = true; // 방문체크 
	}
	cout << ans;
}
