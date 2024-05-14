#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int cnt = 1;
	char num[10] = { '0','1','2','3','4','5','6','7','8','9' };
	int count[10] = { 0 };	
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
		for (int j = 0; j < 10; j++)
			if (s[i] == num[j])
				count[j]++;

	int sum = count[6] + count[9];
	count[6] = sum / 2;
	count[9] = sum - count[6];

	int max = count[0];

	for (int i = 0; i < 10; i++)
		if (max < count[i])
			max = count[i];

	cout << max;
	return 0;
}
