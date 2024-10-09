#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,x; //수열의 크기를 입력받기 위한 변수 
	cin >> n;

	int* num = new int[n];//num 배열의 크기를 n으로 할당
	
	for (int i = 0; i < n; i++)
		cin >> num[i]; //num 입력 받기
	
	
	cin >> x; //x입력받기
	


	return 0;
}
