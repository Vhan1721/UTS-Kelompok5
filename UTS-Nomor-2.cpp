// UTS-Nomor-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int jumMotor, jumMobil;
    int jamMasuk, jamKeluar;
    int tarifmobilperJam = 5000;
    int tarifmotorperJam = 2000;
    int durasiJam;
    int biayaParkir;

    cout << "Masukkan jumlah motor : ";
    cin >> jumMotor;
    cout << "Masukkan jumlah mobil : ";
    cin >> jumMobil;

    cout << "Input jam masuk (format 24 jam) : ";
    cin >> jamMasuk;
    cout << "Input jam keluar (format 24 jam) : ";
    cin >> jamKeluar;

    if (jamKeluar < jamMasuk) {
        durasiJam = (24 - jamMasuk) + jamKeluar;
    }
    else {
        durasiJam = jamKeluar - jamMasuk;
    }

    //rumus untuk menghitung biaya parkir
    biayaParkir = (tarifmobilperJam * jumMobil * durasiJam) +
        (tarifmotorperJam * jumMotor * durasiJam);

    //untuk menampilkan total biaya parkir 
    cout << "\n" << "Total biaya parkir : Rp " << biayaParkir << " (" << durasiJam << " jam)" << endl;

    return 0;
}
