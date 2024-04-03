#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if(n == 0) break;
        vector<int> square;
        square.push_back(0);
        for(int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            square.push_back(value);
        }
        square.push_back(0);
        
        long int max_size = 0;
        stack<pair<int, int>> st;
        st.push(pair<int, int>(0, square[0]));
        for(int i = 1; i < square.size(); i++)
        {
            if(st.top().second > square[i])
            {
                pair<int, int> top;
                while (st.top().second > square[i])
                {
                    top = st.top();
                    long int square_size = (long int) top.second * (long int) (i - top.first);
                    if(max_size < square_size) max_size = square_size;
                    st.pop();
                }
                if(st.top().second < square[i]) st.push(pair<int, int>(top.first, square[i]));
            }
            else
            {
                if(st.top().second < square[i]) st.push(pair<int, int>(i, square[i]));
            }
        }
        cout << max_size << endl;
    }
}
