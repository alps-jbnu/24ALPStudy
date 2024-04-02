#include <iostream>
#define MAX(a,b) a>b?a:b

int main() {
    std::string N;

    int set = 0;
    int num[10] = { 0 };
    std::cin >> N;
    //0~9 각각 개수 count
    for (int i = 0; i < N.length(); i++)
        num[N[i]-'0']++;

    //6과 9를 제외한 숫자들 중 가장 높은 빈도수
    for (int i = 0; i < 10; i++)
        if (i != 6 && i != 9) { set = MAX(num[i], set); }

    //결과 -> 연산 동작 원리 MAX를 활용하여서 6개의 개수와 9개의 개수를 더해서 2세트로 나눈 것과 if문에서 설정한 6과 9를 제외한 숫자들의 사용 갯수의 최댓값을 set로 설정해둔 것과 비교하여서 연산 작동

    set = MAX((num[6] + num[9] + 1) / 2, set);

    std::cout << set << std::endl;
    return 0;
}
