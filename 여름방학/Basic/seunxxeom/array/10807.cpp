#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, s[101], v, res = 0;
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	cin >> v;
	
	for(int j = 0; j < n; j++){
		if(v == s[j]){
			res++;
		}
	}
	cout << res;
}
