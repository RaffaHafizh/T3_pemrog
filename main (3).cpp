/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	//variabel penting
	string namapelanggan, layanan;
	int jumlahpakaian;
	double tarif = 10000;

	//input dari user
	cout << " Program Laundry " << endl;
	cout << " Masukan Nama Pelanggan : ";
	getline(cin, namapelanggan);
	cout << "Masukan Jumlah pakaian: ";
	cin >> jumlahpakaian;
	cout << "tarif perpakaian : Rp ";
	cin >> tarif;

	//hitung total biaya
	double total = jumlahpakaian * tarif;
	
	// tentukan jenis Layanan

	if (jumlahpakaian <= 15) {
		layanan = "Reguler";
	} else if (jumlahpakaian <= 27) {
		layanan = "Express";
	} else {
		layanan = "Kapasitas mesin penuh, pisahkan cucian!";
	}

	// tampilan data awal
	cout << "\n Data Laundry " << endl;
	cout << "Nama Pelanggan: " << namapelanggan << endl;
	cout << " Jumlah Pakaian : " << jumlahpakaian << endl;
	cout << " tarif per pakaian : Rp " << tarif << endl;
	cout << " total biaya : Rp " << total << endl;

	return 0;
}