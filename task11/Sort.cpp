#include <iostream>
#include "Sort.h"
using namespace std;
void sortMass(int *mass, int first, int second, int n) {
	
	int *buf = new int[n];
	
	for (int i = n; i > (((n*first) / second) - 1); i--) {
		buf[i] = mass[i];
	}
	for (int i = 1; i < ((n*first) / second); ++i) {
		for (int j = 0; j < (((n*first) / second) - i); j++) {
			if (mass[j] > mass[j + 1])
			{
				int temp = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i <= (((n*first) / second) - 1); i++) {
		cout << "SORTED_NUMBER[" << i << "]" << mass[i] << endl;
	}
	for (int i = n-1; i > (((n*first) / second)-1); i--) {
		cout << "NUMBER[" << i << "]" << buf[i] << endl;
	}
	//delete [] buf;
}