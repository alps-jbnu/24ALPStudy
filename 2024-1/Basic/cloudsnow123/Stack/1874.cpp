#include <iostream>
#include <stack>

using namespace std;

int main(void) {

    stack<int> S;
    int temp = 1;
    int loop_number, result_index = 0;
    string result;
    cin >> loop_number;

    for (int i = 0; i < loop_number; i++) {
        int number;
        cin >> number;

        while (temp <= number) {
            S.push(temp);
            temp += 1;
            result.push_back('+');
        }

        if (S.top() == number) {
            S.pop();
            result.push_back('-');
        } else {
            cout << "NO";
            return 0;
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << '\n';
    }
    return 0;
}
