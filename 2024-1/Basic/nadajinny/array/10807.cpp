#include <iostream>

int main() {
    int n;
    int arr[101];
    int v;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std:: cin >> v;

    int res = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == v)
            res++;
    }

    std::cout << res;
}
