#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n = 0;
int input_buffer[100001] = {};
char output_buffer[200000] = {};
int* iiter = nullptr;
char* oiter = nullptr;
stack<int> stk;

bool makeSequence();
void push();
void pop();

int main()
{
	fastio;

	iiter = input_buffer;
	oiter = output_buffer;
	cin >> n;

	if (makeSequence())
		for (int i = 0; i < 2 * n; i++) cout << output_buffer[i] << '\n';
	else cout << "NO";
}

bool makeSequence()
{
	for (int i = 0; i < n + 1; i++)
		input_buffer[i] = i + 1;

	for (int i = 0; i < n; i++)
	{
		int k; cin >> k;
		while (*iiter <= k) push();
		if (stk.top() != k) return false;
		pop();
	}

	return true;
}

void push()
{
	int num = *(iiter++);
	stk.push(num);
	*(oiter++) = '+';
}

void pop()
{
	stk.pop();
	*(oiter++) = '-';
}
