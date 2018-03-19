#include <iostream>
#include <stdio.h>
#include <ctime>
#include "Sort.h"
using namespace std;
int randomNumber(int minNum, int maxNum) {
	int result;
	int lowNum = 0;
	int hiNum = 0;
	if (minNum < maxNum) {
		lowNum = minNum;
		hiNum = maxNum + 1;
	}
	else {
		lowNum = maxNum + 1;
		hiNum = minNum;
	}
	result = (rand() % (hiNum - lowNum)) + lowNum;
	return result;
}
int main() {
	srand(time(NULL));
	int mass[16];
	while(true){
	for (int i = 0; i <= (sizeof(mass) / sizeof(mass[0]))-1; i++) {
		mass[i] = randomNumber(-10, 10);
		cout << "NUMBER[" << i << "]" << mass[i] << endl;
	}
	float sum = 0;
	float avrg = 0;
	for (int i = 0; i < ((sizeof(mass) / sizeof(mass[0])) - 1); i++) {
		sum += mass[i];
	}
	avrg = sum / (sizeof(mass) / sizeof(mass[0]) - 1);
	cout << "sum:" << sum << endl;
	cout << "average:" << avrg << endl;
	if (avrg < 0) {
		cout << "\nAverege less than 0, so...\n";
		sortMass(mass, 1, 3, (sizeof(mass) / sizeof(mass[0])));
	}
	else {
		cout << "\nAverege more than 0, so 2/3...\n";
		sortMass(mass, 2, 3, (sizeof(mass) / sizeof(mass[0])));
		
	}
	cout << "\nPress 1 to restart, 2 to exit\n";
	int mode = 0;
	cin >> mode;
	if (mode == 1) {
		continue;
	}
	else {
		break;
	}
	}
	return 0;
}