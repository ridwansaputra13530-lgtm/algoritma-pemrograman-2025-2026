import java.util.ArrayList;
import java.util.Scanner;

public class NIMARRAY {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Masukkan NIM: ");
        String nimString = scanner.next();

        ArrayList<Integer> arrayDigit = new ArrayList<>();

        for (int i = 0; i < nimString.length(); i++) {
            char karakter = nimString.charAt(i);
            int angka = Character.getNumericValue(karakter);
            arrayDigit.add(angka);
        }

        System.out.println("Array digit: " + arrayDigit);
        System.out.println("----------------------");

        
        double total = 0;
        int maks = arrayDigit.get(0);
        int mins = arrayDigit.get(0);

        for (int angka : arrayDigit) {
            total += angka;
            if (angka > maks) maks = angka;
            if (angka < mins) mins = angka;
        }

        double rataRata = total / arrayDigit.size();

        System.out.println("Total seluruh digit   : " + (int)total);
        System.out.println("Nilai maksimum digit  : " + maks);
        System.out.println("Nilai minimum digit   : " + mins);
        System.out.println("Nilai rata-rata digit : " + rataRata);

        System.out.print("Reverse array NIM     : [");
        for (int i = arrayDigit.size() - 1; i >= 0; i--) {
            System.out.print(arrayDigit.get(i));
            if (i > 0) System.out.print(", ");
        }
        System.out.println("]");
    }
}