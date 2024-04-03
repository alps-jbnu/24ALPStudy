#include<iostream>
#include<stack>
using namespace std;

int main (void)
{
	stack<int> s;
	int k;
	int num;
	int sum = 0;


	cin >> k; //입력받을 정수개수

	for (int i = 0; i < k; i++)
	{
		cin >> num; //정수 입력받기
		if (num == 0)
		{
			if (!s.empty())
				s.pop(); //0일 경우에 top 이전의 숫자들 pop
		}
		else
		{
			s.push(num); //0이 아닐 경우에 top에 저장한다.
		}
	}
	int stack_size = s.size();
	for (; !s.empty();)
	{
		sum += s.top(); //top에 있는 숫자를 s.top을 이용하여 하나씩 꺼내어 더한다
		s.pop();
	}
	cout << sum;
	
	return 0;
}
