#include <iostream>
using namespace std;

int facto(int num){
	if(num == 1) return 1;
	if(num == 0) return 1;
	else return facto(num-1)*num;
}

int main(){
	int n, k;
	cin >> n >> k;
	cout << facto(n) / (facto(k) * facto(n-k));
	return 0;
}
