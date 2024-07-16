#include <iostream>
using namespace std;
int main(void)
{
    int i, n, sum = 0, min = 100;
    for(i = 0; i < 7; i++)
    {
        cin >> n;
        if(n % 2 == 1)
        {
            sum += n;
            if(n < min) min = n;
        }
    }
    if(sum == 0) cout << "-1";
    else cout << sum << "\n" << min;
    return 0;
}
