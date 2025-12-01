import java.util.Scanner;

public class ATM {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String nama;
        boolean validNama = false;

        // 1–3. Meminta nama sampai valid (TRUE)
        do {
            System.out.print("Masukkan Nama: ");
            nama = input.nextLine();

            System.out.print("Apakah nama sudah benar? (TRUE/FALSE): ");
            String konfirmasi = input.nextLine().toUpperCase();

            if (konfirmasi.equals("TRUE")) {
                validNama = true;
            } else {
                System.out.println("Nama tidak valid! Silakan masukkan ulang.\n");
            }

        } while (!validNama);

        // 4–5. Input NIM dan konversi menjadi saldo
        long nim;
        System.out.print("Masukkan NIM (angka saja): ");
        nim = input.nextLong();

        long saldo = nim; // misal NIM: 2310355 → Saldo: Rp 2.310.355

        // 6. Tampilkan Nama dan Saldo awal
        System.out.println("\n============================");
        System.out.println("Nama  : " + nama);
        System.out.println("Saldo : Rp " + saldo);
        System.out.println("============================\n");

        int pilihan;

        // 7. Menu ATM menggunakan Switch–Case
        do {
            System.out.println("===== MENU ATM =====");
            System.out.println("1. Cek Saldo");
            System.out.println("2. Tarik Tunai");
            System.out.println("3. Setor Tunai");
            System.out.println("4. Transfer");
            System.out.println("5. Keluar");
            System.out.print("Pilih Menu: ");
            pilihan = input.nextInt();

            switch (pilihan) {
                case 1:
                    System.out.println("Saldo Anda: Rp " + saldo);
                    break;

                case 2:
                    System.out.print("Masukkan jumlah tarik tunai: Rp ");
                    long tarik = input.nextLong();
                    if (tarik > saldo) {
                        System.out.println("Saldo tidak cukup!");
                    } else {
                        saldo -= tarik;
                        System.out.println("Tarik tunai berhasil! Saldo sekarang: Rp " + saldo);
                    }
                    break;

                case 3:
                    System.out.print("Masukkan jumlah setor tunai: Rp ");
                    long setor = input.nextLong();
                    saldo += setor;
                    System.out.println("Setor tunai berhasil! Saldo sekarang: Rp " + saldo);
                    break;

                case 4:
                    System.out.print("Masukkan jumlah transfer: Rp ");
                    long transfer = input.nextLong();
                    if (transfer > saldo) {
                        System.out.println("Saldo tidak cukup!");
                    } else {
                        saldo -= transfer;
                        System.out.println("Transfer berhasil! Saldo sekarang: Rp " + saldo);
                    }
                    break;

                case 5:
                    System.out.println("Terima kasih telah menggunakan ATM!");
                    break;

                default:
                    System.out.println("Menu tidak tersedia!");
            }

            System.out.println();

        } while (pilihan != 5);

        input.close();
    }
}
