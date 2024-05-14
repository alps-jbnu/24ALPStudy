#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    stack<int> position_stack;
    stack<pair<int, int>> output_stack;
    int * destination = new int[n]{0};
    
    for(int i = 0; i < n; i++)
    {
        int high;
        cin >> high;
        position_stack.push(high);
    }
    
    while (!position_stack.empty())
    {
        if(output_stack.empty() || output_stack.top().first > position_stack.top())
        {
            output_stack.push(pair<int, int> (position_stack.top(), position_stack.size() - 1));
            position_stack.pop();
        }
        else
        {
            destination[output_stack.top().second] = (int) position_stack.size();
            output_stack.pop();
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << destination[i] << ' ';
    }
    cout << endl;
    
    delete [] destination;
}
