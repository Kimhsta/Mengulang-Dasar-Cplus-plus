#include <iostream>
using namespace std;

int main()
{
    char jenisKamar;
    int lamaInap;
    double tarifKamar, biayaInap, potongan, totalBiaya;

    cout << "========== HOTEL SRI MEKAR ==========" << endl;
    cout << "Pilih jenis kamar:" << endl;
    cout << "1. Kamar jenis A - Rp. 60.000 per hari" << endl;
    cout << "2. Kamar jenis B - Rp. 50.000 per hari" << endl;
    cout << "3. Kamar jenis C - Rp. 40.000 per hari" << endl;
    cout << "=====================================" << endl;
    cout << "Masukkan pilihan jenis kamar (A/B/C): ";
    cin >> jenisKamar;

    switch (jenisKamar)
    {
    case 'A':
    case 'a':
        tarifKamar = 60000;
        break;
    case 'B':
    case 'b':
        tarifKamar = 50000;
        break;
    case 'C':
    case 'c':
        tarifKamar = 40000;
        break;
    default:
        cout << "Jenis kamar tidak valid!" << endl;
        return 1;
    }

    cout << "Masukkan lama menginap (dalam hari): ";
    cin >> lamaInap;
    cout << endl;

    biayaInap = tarifKamar * lamaInap;

    if (lamaInap > 4)
    {
        potongan = 0.05 * biayaInap;
    }
    else
    {
        potongan = 0;
    }

    totalBiaya = biayaInap - potongan;

    cout << "========== RINCIAN BIAYA ==========" << endl;
    cout << "Jenis Kamar            : " << jenisKamar << endl;
    cout << "Tarif Kamar per hari   : Rp. " << tarifKamar << endl;
    cout << "Lama Menginap          : " << lamaInap << " hari" << endl;
    cout << "Biaya Inap             : Rp. " << biayaInap << endl;
    cout << "Potongan               : Rp. " << potongan << endl;
    cout << "Total Biaya yg Dibayar : Rp. " << totalBiaya << endl;
    cout << "===================================" << endl;

    return 0;
}
