// UTS-Nomor-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	string nama;
	int golongan, jam_kerja;
	int upah_per_jam;
	int total_gaji;

	cout << "Masukkan nama anda : ";
	cin >> nama;
	cout << "Masukkan golongan anda : ";
	cin >> golongan;
	cout << "Masukkan jam kerja anda per minggu : ";
	cin >> jam_kerja;

	if (golongan == 1) {
		upah_per_jam = 25000;
	}
	else if (golongan == 2) {
		upah_per_jam = 35000;
	}
	else if (golongan == 3) {
		upah_per_jam = 50000;
	}
	else {
		cout << "Golongan tidak valid";
		return 1;
	}
	if (jam_kerja > 48) {
		int jam_lembur = jam_kerja - 48;
		total_gaji = (jam_kerja * upah_per_jam) + (jam_lembur * 10000);
	}
	else {
		total_gaji = jam_kerja * upah_per_jam;
	}

	cout << "\n" << "Total Gaji " << nama << " per minggu : " << total_gaji << endl;
	return 0;
}
