#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int want_array[n];
    vector<char> oper;
    int next_input_number = 1;
    stack<int> s;
    
    for(int i = 0; i < n; i++) cin >> want_array[i];
    
    for(int want_number : want_array)
    {
        if(!s.empty() && s.top() == want_number)
        {
            oper.push_back('-');
            s.pop();
        }
        else if(!s.empty() && want_number < s.top())
        {
            cout << "NO" << endl;
            exit(0);
        }
        else
        {
            while (s.empty() || s.top() != want_number)
            {
                s.push(next_input_number);
                oper.push_back('+');
                next_input_number++;
            }
            oper.push_back('-');
            s.pop();
        }
    }
    
    for(char op : oper)
    {
        cout << op << '\n';
    }
}
