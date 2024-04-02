#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nge(n, -1);
    stack<pair<int, int>> s;
    
    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        while (!s.empty() && s.top().first < input)
        {
            nge[s.top().second] = input;
            s.pop();
        }
        s.push(pair<int, int>(input, i));
    }
    
    for(int n : nge)
    {
        cout << n << ' ';
    }
    cout << endl;
}
