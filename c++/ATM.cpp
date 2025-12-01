#include <iostream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, konfirmasi;
    bool validNama = false;

    // 1–3. Meminta nama sampai valid (TRUE)
    do {
        cout << "Masukkan Nama: ";
        getline(cin, nama);

        cout << "Apakah nama sudah benar? (TRUE/FALSE): ";
        getline(cin, konfirmasi);

        if (konfirmasi == "TRUE" || konfirmasi == "true") {
            validNama = true;
        } else {
            cout << "Nama tidak valid! Silahkan masukkan kembali.\n\n";
        }
    } while (!validNama);

    // 4–5. Input NIM → Saldo
    long long nim;
    cout << "Masukkan NIM (angka saja): ";
    cin >> nim;

    long long saldo = nim; // contoh: 2510381 → Rp 2.510.381

    // 6. Tampilkan Data Awal
    cout << "\n============================\n";
    cout << "Nama  : " << nama << endl;
    cout << "Saldo : Rp " << saldo << endl;
    cout << "============================\n\n";

    int pilihan;

    // 7. Menu ATM menggunakan switch–case
    do {
        cout << "===== MENU ATM =====\n";
        cout << "1. Cek Saldo\n";
        cout << "2. Tarik Tunai\n";
        cout << "3. Setor Tunai\n";
        cout << "4. Transfer\n";
        cout << "5. Keluar\n";
        cout << "Pilih Menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Saldo Anda: Rp " << saldo << endl;
                break;

            case 2: {
                long long tarik;
                cout << "Masukkan jumlah tarik tunai: Rp ";
                cin >> tarik;

                if (tarik > saldo) {
                    cout << "Saldo tidak cukup!\n";
                } else {
                    saldo -= tarik;
                    cout << "Tarik tunai berhasil! Saldo sekarang: Rp " << saldo << endl;
                }
                break;
            }

            case 3: {
                long long setor;
                cout << "Masukkan jumlah setor tunai: Rp ";
                cin >> setor;

                saldo += setor;
                cout << "Setor tunai berhasil! Saldo sekarang: Rp " << saldo << endl;
                break;
            }

            case 4: {
                long long transfer;
                cout << "Masukkan jumlah transfer: Rp ";
                cin >> transfer;

                if (transfer > saldo) {
                    cout << "Saldo tidak cukup!\n";
                } else {
                    saldo -= transfer;
                    cout << "Transfer berhasil! Saldo sekarang: Rp " << saldo << endl;
                }
                break;
            }

            case 5:
                cout << "Terima kasih telah menggunakan ATM!\n";
                break;

            default:
                cout << "Menu tidak tersedia!\n";
        }

        cout << endl;

    } while (pilihan != 5);

    return 0;
}
