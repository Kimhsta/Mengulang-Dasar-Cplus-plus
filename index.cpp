#include <iostream>

int main()
{
    double gajiPokok;

    // Input gaji pokok
    std::cout << "Masukkan gaji pokok: ";
    std::cin >> gajiPokok;

    // Hitung tunjangan
    double tunjangan = 0.10 * gajiPokok;

    // Hitung gaji kotor
    double gajiKotor = gajiPokok + tunjangan;

    // Hitung tabungan hari tua
    double tabunganHariTua = 0.05 * gajiKotor;

    // Hitung gaji diterima
    double gajiDiterima = gajiKotor - tabunganHariTua;

    // Output hasil
    std::cout << "Tunjangan: " << tunjangan << std::endl;
    std::cout << "Gaji Kotor: " << gajiKotor << std::endl;
    std::cout << "Tabungan Hari Tua: " << tabunganHariTua << std::endl;
    std::cout << "Gaji Diterima: " << gajiDiterima << std::endl;

    return 0;
}
