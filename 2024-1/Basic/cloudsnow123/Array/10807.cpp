#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int *array = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int result, cnt = 0;
    cin >> result;

    for (int i = 0; i < n; i++) {
        if (array[i] == result) {
            cnt++;
        }
    }

    cout << cnt;
    
    delete[] array;

    return 0;
}
