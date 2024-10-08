#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, t;
	int res[10] = {0,};
	cin >> a >> b >> c;
	
	t = a * b * c;
	
	for(int i = t; i > 0; i /= 10){
		res[i%10]++;
	}
	
	for(int j = 0; j < 10; j++){
		cout << res[j] << "\n";
	}
	
	return 0;
}
