#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int pn[20];
double goal[20][20][20];
double a, b;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 2; i < 20; i++) {
        for (int j = 2; j < 20; j++) {
            if (i * j > 20) continue;
            pn[i * j] = 1; // 0은 소수, 1은 소수 아님
        }
    }
    pn[0] = pn[1] = 1;

    cin >> a >> b;
    a /= 100;
    b /= 100;

    // 골 골, 골 노골, 노골 골, 노골 노골 
    goal[0][1][1] = a * b;
    goal[0][1][0] = a * (1 - b);
    goal[0][0][1] = (1 - a) * b;
    goal[0][0][0] = (1 - a) * (1 - b);

    for (int i = 0; i < 18; i++) {
        for (int j = 0; j < 18; j++) {
            for (int k = 0; k < 18; k++) {
                // 골 골, 골 노골, 노골 골, 노골 노골
                goal[i + 1][j + 1][k + 1] += goal[i][j][k] * a * b;
                goal[i + 1][j + 1][k] += goal[i][j][k] * a * (1 - b);
                goal[i + 1][j][k + 1] += goal[i][j][k] * (1 - a) * b;
                goal[i + 1][j][k] += goal[i][j][k] * (1 - a) * (1 - b);
            }
        }
    }

    double result = 0;
    for (int i = 0; i <= 18; i++) {
        for (int j = 0; j <= 18; j++) {
            if (pn[i] && pn[j]) continue;
            result += goal[17][i][j];
        }
    }

    cout << result << '\n';

    return 0;
}
