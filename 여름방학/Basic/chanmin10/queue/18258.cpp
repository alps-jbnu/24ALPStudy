#include <iostream>
using namespace std;
const int MX = 2000001;
int dat[MX], head = 0, tail = 0;

void push(int n);
int empty(), pop(), size(), front(), back();

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        if(str == "push"){
            cin >> x;
            push(x);
        }
        else if(str == "empty"){
            cout << empty() << "\n";
        }
        else if(str == "pop"){
            cout << pop() << "\n";
        }
        else if(str == "size"){
            cout << size() << "\n";
        }
        else if(str == "front"){
            cout << front() << "\n";
        }
        else if(str == "back"){
            cout << back() << "\n";
        }
    }
    return 0;
}

void push(int n){
    dat[tail++] = n;
}
int empty(){
    if(head == tail) return 1;
    else return 0;
}
int pop(){
    if(empty()) return -1;
    else return dat[head++];
}
int size(){
    return tail - head;
}
int front(){
    if(empty()) return -1;
    else return dat[head];
}
int back(){
    if(empty()) return -1;
    else return dat[tail - 1];
}
