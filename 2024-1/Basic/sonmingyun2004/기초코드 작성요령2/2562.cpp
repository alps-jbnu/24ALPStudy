#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int c = 0;
    int x;
    for(int i = 1; i < 10; i++)
    {
        cin >> x;
        if(a < x)
        {
            a = x;
            c = i;
        }
    }
    cout << a << '\n' << c;
    
}
