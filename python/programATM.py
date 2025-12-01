# Program ATM Sederhana - Python

while True:
    nama = input("Masukkan Nama Anda: ")
    konfirmasi = input(f"Apakah nama '{nama}' sudah benar? (TRUE/FALSE): ").upper()

    if konfirmasi == "TRUE":
        break
    else:
        print("Silakan masukkan nama kembali!\n")

# Input NIM dan konversi jadi saldo
while True:
    nim = input("Masukkan NIM Anda (angka saja, contoh 2310355): ")
    if nim.isdigit():
        saldo = int(nim)
        break
    else:
        print("NIM harus berupa angka!\n")

# Format saldo
saldo_rp = f"Rp {saldo:,.0f}".replace(",", ".")

print("\n===== DATA ANDA =====")
print(f"Nama  : {nama}")
print(f"Saldo : {saldo_rp}")

# Menu ATM
while True:
    print("\n===== MENU ATM =====")
    print("1. Cek Saldo")
    print("2. Tarik Tunai")
    print("3. Setor Tunai")
    print("4. Transfer")
    print("5. Keluar")

    pilihan = input("Pilih menu (1-5): ")

    match pilihan:
        case "1":
            print(f"Saldo Anda saat ini: {saldo_rp}")

        case "2":
            tarik = int(input("Masukkan jumlah yang ingin ditarik: "))
            if tarik <= saldo:
                saldo -= tarik
                saldo_rp = f"Rp {saldo:,.0f}".replace(",", ".")
                print("Penarikan berhasil!")
                print(f"Saldo tersisa: {saldo_rp}")
            else:
                print("Saldo tidak cukup!")

        case "3":
            setor = int(input("Masukkan jumlah setor: "))
            saldo += setor
            saldo_rp = f"Rp {saldo:,.0f}".replace(",", ".")
            print("Setoran berhasil!")
            print(f"Saldo sekarang: {saldo_rp}")

        case "4":
            tujuan = input("Masukkan nomor rekening tujuan: ")
            jumlah = int(input("Masukkan jumlah transfer: "))
            if jumlah <= saldo:
                saldo -= jumlah
                saldo_rp = f"Rp {saldo:,.0f}".replace(",", ".")
                print(f"Transfer ke {tujuan} berhasil!")
                print(f"Saldo tersisa: {saldo_rp}")
            else:
                print("Saldo tidak cukup!")

        case "5":
            print("Terima kasih telah menggunakan ATM!")
            break

        case _:
            print("Pilihan tidak valid, coba lagi!")
