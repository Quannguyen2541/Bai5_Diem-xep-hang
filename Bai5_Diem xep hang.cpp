// Bai5_Diem xep hang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	cout << "CHUONG TRINH TINH DIEM XEP HANG\n";
	double  diem;
	cin >> diem;
	cout << "diem:";
	if (diem < 5) {
		cout << "Yeu";
	}
	else if (diem <= 6) {
		cout << "TB";
	}
	else if (diem < 8) {
		cout << "KHA";
	}
	else {
		cout << "gioi";
	}

		return 0;

	}

