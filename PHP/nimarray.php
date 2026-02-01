<?php
// 1. Input NIM 
$nim_string = "2310355"; 

echo "NIM Input: " . $nim_string . "\n";

$array_digit = [];

// 2. Loop memisahkan karakter menjadi array
for ($i = 0; $i < strlen($nim_string); $i++) {
    $angka = (int)$nim_string[$i]; 
    array_push($array_digit, $angka);
}

echo "Array digit: [" . implode(", ", $array_digit) . "]\n";
echo "----------------------\n";

// 3. Menghitung Statistik menggunakan fungsi bawaan PHP
$total = array_sum($array_digit);
$maks = max($array_digit);
$mins = min($array_digit);
$count = count($array_digit);
$rata_rata = $total / $count;

// 4. Output
echo "Total seluruh digit   : " . $total . "\n";
echo "Nilai maksimum digit  : " . $maks . "\n";
echo "Nilai minimum digit   : " . $mins . "\n";
echo "Nilai rata-rata digit : " . $rata_rata . "\n";

// 5. Reverse Array
$array_reverse = array_reverse($array_digit);
echo "Reverse array NIM     : [" . implode(", ", $array_reverse) . "]\n";
?>