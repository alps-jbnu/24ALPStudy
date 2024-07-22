#include <iostream>
using namespace std;

int arr[100001];

int main(void) 
{
	int x;
	cin >> x;
	int y;
	int a = 0;
	int sum = 0;
	for (int i = 0; i < x; i++) {
		cin >> y;
		if(y==0){
			a--;
		}
		else{
			arr[a] = y;
			a++;
		}
	}
	for (int i = 0; i < a; i++) {
		sum += arr[i];
	}
	cout << sum;
	return 0;
}
