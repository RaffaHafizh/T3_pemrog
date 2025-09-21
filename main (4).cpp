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
    int n;
    cout << "=== Program Total Belanja Warung ===" << endl;
    cout << "Masukin jumlah barang : ";
    cin >> n;
    
    string namaBarang[50];
    int jumlah[50];
    int harga[50];
    int total = 0;
    
    for (int i = 0; i < n; i++) {
        cout << "\nBarang ke-" << i + 1 << endl;
        cout << "Nama Barang : ";
        cin >> namaBarang[i];
        cout << "jumlah       : ";
        cin >> jumlah[i];
        cout << "Harga satuan: ";
        cin >> harga[i];
        
        total += jumlah[i] * harga[i];
    }
    
    cout << "\n=== Struk Belanja ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << namaBarang[i] << " x " << jumlah[i] << " = Rp" << jumlah[i] * harga[i] << endl;
    }
    cout << "--------------------------" << endl;
    cout << "Total Belanja: Rp" << total << endl;
    return 0;
}