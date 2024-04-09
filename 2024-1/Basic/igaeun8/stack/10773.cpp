#include <iostream>
#include <stack>

using namespace std;


int main() {
    stack<int> s;
    int K, X;
    int sum = 0;

    cin >> K;

    for(int i=0; i<K; i++) {
        cin >> X;
        if(X == 0) 
            s.pop();
        else 
            s.push(X);   
    }

    //합을 구하는 반복문을 따로 만들어주기
    int stack_size = s.size();
    for(int i = 0; i < stack_size; i++){
        sum += s.top(); // 2. 더하기
        s.pop(); // 1. top에 있는 숫자를 하나씩 꺼내면서 
    }

    cout << sum;

    return 0;
}
