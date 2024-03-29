#include <iostream>
 
using namespace std;
 


int main(int argc, char const *argv[]) {
	
	string arr;
	cin >> arr; //문자열을 배열로 

	int alp[26] = {0}; //각 원소 0으로 초기화

	for(int i=0; i< arr.length(); i++)
		alp[arr[i] - 'a']++; //알파벳 위치를 구해서 배열에 저장

	for(int i=0; i<26; i++) //배열 출력
		cout << alp[i] << " ";
 
	return 0;
}
