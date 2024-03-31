#include <iostream>
#include <stack>

using namespace std;

stack<int> s;
string str;
int N,X;

int main() {
    cin >> N;

    for(int i=0;i<N;i++) {
        cin >> str;

        if(str == "push") {
            cin >> X;
            s.push(X);
        } 
        else if(str == "top") {
            if(s.empty()) cout << "-1\n";
            else cout << s.top() << "\n";
        } 
        else if(str == "pop") {
            if(s.empty()) cout << "-1\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        } 
        else if (str == "empty") 
            cout << s.empty() << "\n";
        else if (str == size")
            cout << s.size() << "\n";
    }
}
