#include <iostream>
using namespace std;

int main()
{
    int n, v;
    int k[201] = {0};
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        k[a + 100]++;
    }
    cin >> v;
    cout << k[v + 100];
}
