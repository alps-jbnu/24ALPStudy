#include <bits/stdc++.h>
#include <algorithm>


using namespace std;

/* sort 알고리즘 내림차순 정렬
sort(시작 지점, 끝 지점, greater<char>())*/
		   
int main(int argc, char **argv)
{
	
	string str;


	cin >> str;
	
	
	sort(str.begin(), str.end(), greater<char>());
	//sort(str.begin(), str.end(), greater<>());

	cout << str;

	return 0;
}
