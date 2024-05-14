#include <iostream>
#include <queue>
using namespace std;
 
int main(void)
{
  cin.tie(NULL);
	cin.sync_with_stdio(false);
    
	int N, X;
	queue<int> Q;
	string str;
	cin >> N;
 
	for (int i = 0; i < N; i++) {
		cin >> str;

        //1.push
		if (str == "push") {
			cin >> X;
			Q.push(X);
		}

        //2.pop
		else if (str == "pop") {
			if (Q.empty()) cout << -1 << '\n';
			else {
				cout << Q.front() << '\n';
				Q.pop();
			}
		}

        //3.size
		else if (str == "size") {
			cout << Q.size() << '\n';
		}

        //4.empty
		else if (str == "empty") {
			cout << Q.empty() << '\n';
		}
        
        //5.front
		else if (str == "front") {
			if (Q.empty()) cout << -1 << '\n';
			else cout << Q.front() << '\n';
		}

        //6.back
		else if (str == "back") {
			if (Q.empty()) cout << -1 << '\n';
			else cout << Q.back() << '\n';
		}
	}
 
	return 0;
}
