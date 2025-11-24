nama = input("Masukan nama barang: ")
harga = float(input("Masukan harga barang: "))
jumlah = int(input("Masukan jumlah beli: "))

total = harga * jumlah

if total > 38100:
    diskon = total * 0.1
else :
    diskon = 0

total_bayar = total - diskon

print("\n===== STRUK PEMBELIAN =====")
print(f"Nama Barang     : {nama}")
print(f"Harga Satuan    : {harga}")
print(f"Jumlah beli     : {jumlah}")
print(f"total Harga     : {total}")
print(f"Diskon          : {diskon}")
print(f"Total Bayar     : {total_bayar}")
print("=============================")