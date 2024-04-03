#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int k;
    cin >> k;
    stack<int> s;
    
    for(int i = 0; i < k; i++)
    {
        int input;
        cin >> input;
        
        if(input == 0) s.pop();
        else s.push(input);
    }
    
    int total = 0;
    while (!s.empty())
    {
        total += s.top();
        s.pop();
    }
    
    cout << total << endl;
}
