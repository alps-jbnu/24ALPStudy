#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{

	string str1, str2;
	cin >> str1 >> str2;

	int src[26] = {0};
	int des[26] = {0};

	int cnt = 0;

	for (int i = 0; i < str1.length(); i++)
	{
		src[str1[i] - 'a']++;
	}
	for (int i = 0; i < str2.length(); i++)
	{
		des[str2[i] - 'a']++;
	}
	// 일단 여기까지 문자랑 인덱스 매핑 완료

	for (int i = 0; i < 26; i++)
	{
		if (src[i] != des[i])
		{
			cnt += abs(src[i] - des[i]);
		}
	}

	cout << cnt << "\n";
	return 0;
}
