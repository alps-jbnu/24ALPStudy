#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    string str;
    int i = 1; //수열은 1부터 시작하여 순차적으로 증가
    int n;
    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;

        if (i <= num)
        {
            while (i <= num)
            {
                st.push(i);
                str += '+';
                i++;
            }
            st.pop();
            str += '-';
        }
        else
        {
            if (st.top() < num)
            {
                cout << "NO\n";
                return 0;
            }
            else
            {
                st.pop();
                str += '-';
            }
        }
    }
    for (int j = 0; j < str.length(); j++)
    {
        cout << str[j] << "\n";
    }
    return 0;
}
