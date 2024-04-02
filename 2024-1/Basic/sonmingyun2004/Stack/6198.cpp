#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    long int total = 0;
    stack<int> s;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int height;
        cin >> height;
        while (!s.empty() && s.top() <= height)
        {
            s.pop();
        }
        total += s.size();
        s.push(height);
    }
    
    cout << total << endl;
}
