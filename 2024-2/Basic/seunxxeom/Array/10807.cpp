#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, s[101], v;
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> s[i];
	}
	cin >> v;
	
	int res = 0;
	for(int j=0; j<n; j++){
		if(s[j]==v){
			res++;
		}
	}
	cout << res;
}
