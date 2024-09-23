#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, max = 0, pos = 0;
	
	for(int i = 1; i < 10; i++){
		cin >> n;
		if(n > max){
			max = n;
			pos = i;
		}
	}
	
	cout << max << "\n";
	cout << pos;
}
