// 1344: 축구
#include <bits/stdc++.h>

using namespace std;

int prime_num[7] = {
        2, 3, 5, 7, 11, 13, 17
};
int A, B;
double A_win, B_win;
int C[20];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(16);
    C[0] = 1, C[1] = 1;
    for (int i = 2; i <= 18; i++) {
        C[i] = 1;
        for (int j = i - 1; j >= 1; j--) {
            C[j] += C[j - 1];
        }
    }
    cin >> A >> B;
    A_win = A / 100.0, B_win = B / 100.0;
    double answer_A = 0, answer_B = 0;
    int index = 0;
    for (int i = 0; i <= 18; i++) {
        if (prime_num[index] == i) {
            index++;
            continue;
        }
        double A_percentage = C[i] * pow(A_win, i) * pow(1 - A_win, 18 - i);
        double B_percentage = C[i] * pow(B_win, i) * pow(1 - B_win, 18 - i);
        answer_A += A_percentage;
        answer_B += B_percentage;
    }
    cout << 1.0 - answer_A * answer_B;
    return 0;
}
