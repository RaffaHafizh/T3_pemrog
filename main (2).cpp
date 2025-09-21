/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string namaObat;
    int jumlah;
    float harga, total, diskon = 0, bayar;

    cout << "=== Program Apotek ===" << endl;
    cout << "Nama obat: ";
    cin >> namaObat;
    cout << "Harga per unit: Rp ";
    cin >> harga;
    cout << "Jumlah obat: ";
    cin >> jumlah;

    total = harga * jumlah;

    // diskon kalau beli lebih dari 10 pcs
    if (jumlah > 10) {
        diskon = total * 0.1; // 10%
    }

    bayar = total - diskon;

    cout << fixed << setprecision(2);
    cout << "\n=== Struk Pembelian Obat ===" << endl;
    cout << "Obat        : " << namaObat << endl;
    cout << "Jumlah      : " << jumlah << endl;
    cout << "Total       : Rp " << total << endl;
    cout << "Diskon      : Rp " << diskon << endl;
    cout << "Total Bayar : Rp " << bayar << endl;

    return 0;
}