
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include <numeric>   

using namespace std;

int main() {
    // 1. Input NIM sebagai String (biar mudah dipisah)
    string nim;
    cout << "Masukkan NIM: ";
    cin >> nim;

    vector<int> array_digit;

    // 2. Loop memisahkan karakter menjadi array angka
    for (char karakter : nim) {
        // Mengubah karakter '0'-'9' menjadi angka integer
        // Trik: karakter dikurang '0' akan menghasilkan nilai angkanya
        int angka = karakter - '0';
        array_digit.push_back(angka);
    }

    // Tampilkan Array Awal
    cout << "Array digit: ";
    for (int n : array_digit) cout << n << " ";
    cout << "\n----------------------\n";

    // 3. Menghitung Statistik
    double total = 0;
    int maks = array_digit[0];
    int mins = array_digit[0];

    for (int n : array_digit) {
        total += n;             // Hitung Total
        if (n > maks) maks = n; // Cari Maksimum
        if (n < mins) mins = n; // Cari Minimum
    }

    double rata_rata = total / array_digit.size();

    // 4. Output Hasil
    cout << "Total seluruh digit   : " << total << endl;
    cout << "Nilai maksimum digit  : " << maks << endl;
    cout << "Nilai minimum digit   : " << mins << endl;
    cout << "Nilai rata-rata digit : " << rata_rata << endl;

    // 5. Reverse Array
    cout << "Reverse array NIM     : ";
    // Loop dari belakang ke depan
    for (int i = array_digit.size() - 1; i >= 0; i--) {
        cout << array_digit[i] << " ";
    }
    cout << endl;

    return 0;
}
