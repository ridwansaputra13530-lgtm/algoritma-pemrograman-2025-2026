<?php
// === 1. Meminta Nama dan Validasi ===
while (true) {
    echo "Masukkan nama Anda: ";
    $nama = trim(fgets(STDIN));

    echo "Apakah nama Anda benar? (TRUE/FALSE): ";
    $valid = strtoupper(trim(fgets(STDIN)));

    if ($valid == "TRUE") {
        break;
    } else {
        echo "Nama salah, silakan masukkan lagi.\n\n";
    }
}

// === 2. Input NIM dan Konversi Menjadi Saldo ===
echo "Masukkan NIM Anda (angka saja): ";
$nim = trim(fgets(STDIN));

$saldo = (int)$nim;

// Format saldo
$saldo_format = number_format($saldo, 0, ',', '.');

// === 3. Tampilkan Nama dan Saldo Awal ===
echo "\n============================\n";
echo "Nama  : $nama\n";
echo "Saldo : Rp $saldo_format\n";
echo "============================\n\n";

// === 4. Menu ATM (Switch–Case) ===
while (true) {
    echo "===== MENU ATM =====\n";
    echo "1. Cek Saldo\n";
    echo "2. Tarik Tunai\n";
    echo "3. Setor Tunai\n";
    echo "4. Transfer\n";
    echo "5. Keluar\n";
    echo "Pilih menu: ";
    $pilih = trim(fgets(STDIN));

    switch ($pilih) {
        case '1':
            echo "Saldo Anda sekarang: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            break;

        case '2':
            echo "Masukkan jumlah tarik tunai: ";
            $tarik = trim(fgets(STDIN));
            if ($tarik > $saldo) {
                echo "Saldo tidak cukup!\n\n";
            } else {
                $saldo -= $tarik;
                echo "Tarik tunai berhasil!\n";
                echo "Sisa saldo: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            }
            break;

        case '3':
            echo "Masukkan jumlah setor tunai: ";
            $setor = trim(fgets(STDIN));
            $saldo += $setor;
            echo "Setor tunai berhasil!\n";
            echo "Saldo sekarang: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            break;

        case '4':
            echo "Masukkan jumlah transfer: ";
            $tf = trim(fgets(STDIN));
            if ($tf > $saldo) {
                echo "Saldo tidak cukup untuk transfer!\n\n";
            } else {
                echo "Masukkan rekening tujuan: ";
                $rek = trim(fgets(STDIN));
                $saldo -= $tf;
                echo "Transfer ke $rek berhasil!\n";
                echo "Sisa saldo: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            }
            break;

        case '5':
            echo "Terima kasih telah menggunakan ATM!\n";
            exit;

        default:
            echo "Menu tidak tersedia!\n\n";
    }
}
?>
