#include <iostream>
#include <stack>
#include <vector>
using namespace std;

long long answer = 0; //int로 선언해서 틀림 ㄱ-
long long input;
stack<int> s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		long long height;
        cin >> height;

        while(!s.empty() && s.top() <= height)
            {s.pop();}
            
        answer += s.size();
        s.push(height);
        
	}


	cout << answer << endl;
	return 0;
}
