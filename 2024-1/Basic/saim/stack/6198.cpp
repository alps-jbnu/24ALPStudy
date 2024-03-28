#include<iostream>
#include<stack>
using namespace std;

stack<int> st;

int main(void)
{

	int N;
	long long sum = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int height = 0;
		cin >> height;

		if (st.empty())
		{
			st.push(height); // 1번 건물은 스택에 넣는다.
			continue;
		}
		while (!st.empty() && st.top() <= height) //현재 스택에 들어온 건물보다 작은 건물들은 pop
			st.pop();

		//건물을 모두 뺐으면 스택에 있는 개수만큼 sum에 더해준다.
		sum += st.size();

		//현재 건물을 스택에 넣는다.(자기자신보다 작은 건물들은 pop 했으므로 스택에 넣을 수 있게 됨)
		st.push(height);
	}
	cout << sum;
}
