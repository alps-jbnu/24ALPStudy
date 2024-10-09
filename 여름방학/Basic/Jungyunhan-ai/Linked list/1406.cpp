#include <iostream>
#include <list>

using namespace std;

string str;
int m;
char cm, c;
list<char> li;
list<char>::iterator it;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str >> m;

    for (auto i : str)
        li.push_back(i);
    it = li.end();

    while (m--)
    {
        cin >> cm;
        switch (cm)
        {
        case 'L':
            if (it != li.begin())
                it--;
            break;
        case 'D':
            if (it != li.end())
                it++;
            break;
        case 'B':
            if (it != li.begin())
                it = li.erase(--it);
            break;
        case 'P':
            cin >> c;
            //li.insert(it, c);
            it = li.insert(it, c);
            it++;
            break;
        default:
            break;
        }
    }

    for (it = li.begin(); it != li.end(); it++)
        cout << *it;

    return 0;
}

