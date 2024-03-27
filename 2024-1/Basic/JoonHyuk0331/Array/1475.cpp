#include <iostream>
using namespace std;

int main(void)
{
	int arr[10]={}; 
	int num = 0, max = 1;//0예외처리

	cin >> num;

	while (num != 0)//한자리씩 파싱
	{
		arr[num % 10]++;
		num = num / 10;
	}
	//6과9를 같은 숫자로 취급하는 아이디어
	arr[6] += arr[9];//6에 몰아넣기
	arr[6] = (arr[6] + 1) / 2; //2개세트니까 2로 나눔

	max = arr[0];
	for (int i = 0; i < 9; i++)
		if (max < arr[i])
			max = arr[i];
	cout << max;
}
