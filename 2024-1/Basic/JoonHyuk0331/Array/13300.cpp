#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int female[7] = {}, male[7] = {}, number_of_people, room_space,room_require=0;
	cin >> number_of_people >> room_space;
	for (int i = 0; i < number_of_people; i++) {
		int gender, student_class;
		cin >> gender >> student_class;
		if (gender) male[student_class]++;
		else female[student_class]++;
	}
	for (int i = 1; i <= 6; i++) {
		male[i] += room_space - 1;
		female[i] += room_space - 1;
	}
	for (int i = 1; i <= 6; i++) {
		male[i] = male[i] / room_space;
		female[i] = female[i] / room_space;
	}
	for (int i = 1; i <= 6; i++) {
		room_require += male[i];
		room_require += female[i];
	}
	cout << room_require;
}
