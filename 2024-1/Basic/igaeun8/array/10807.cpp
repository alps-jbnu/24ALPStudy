#include <iostream>
using namespace std;

int n, v;
int a[1001] = {0};

int main(void){
	
	cin >> n;
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	cin >> v;

	int cnt = 0;

	// a1 + a2 = X -> a2 = X - a1
	for (int i = 0; i < n; i++) {
    	if(a[i] == v) cnt++;
	}
	cout << cnt;
}
