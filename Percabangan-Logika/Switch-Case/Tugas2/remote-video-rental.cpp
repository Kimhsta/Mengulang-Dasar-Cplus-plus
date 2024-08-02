#include <iostream>
using namespace std;

int main()
{
    int lamaPeminjaman;
    const int hargaSewaPerKaset = 2000;
    int denda = 0;
    int totalBayar;

    // Input lama peminjaman
    cout << "Masukkan lama peminjaman (dalam hari): ";
    cin >> lamaPeminjaman;

    // Hitung denda
    if (lamaPeminjaman > 2)
    {
        if (lamaPeminjaman <= 4)
        {
            denda = (lamaPeminjaman - 2) * 1500;
        }
        else
        {
            denda = (2 * 1500) + ((lamaPeminjaman - 4) * 2000);
        }
    }

    // Hitung total bayar
    totalBayar = hargaSewaPerKaset + denda;

    // Output total bayar
    cout << "Total bayar = Rp. " << totalBayar << endl;

    return 0;
}
