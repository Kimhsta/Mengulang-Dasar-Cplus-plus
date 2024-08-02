#include <iostream>
using namespace std;

int main()
{
    int kelas;
    char kdkamar;
    string nama;
    int lm_inap, tarif, bayar;
    cout << "Nama Tamu          : ";
    cin >> nama;
    cout << "Kelas Kamar  [1-2] : ";
    cin >> kelas;
    cout << "Kode Kamar [A-B-C] : ";
    cin >> kdkamar;
    cout << "lama Inap          : ";
    cin >> lm_inap;

    if (kelas == 1)
    {
        if (kdkamar == 'A')
        {
            tarif = 20000;
        }
        else if (kdkamar == 'B')
        {
            tarif = 15000;
        }
        else
        {
            tarif = 10000;
        }
    }
    else
    {
        if (kdkamar == 'A')
        {
            tarif = 60000;
        }
        else if (kdkamar == 'B')
        {
            tarif = 50000;
        }
        else
        {
            tarif = 40000;
        }
    }

    bayar = lm_inap * tarif;
    cout << endl;
    cout << "==== HASIL PERHITUNGAN ===" << endl;
    cout << "Tarif Kamar    :Rp. " << tarif << endl;
    cout << "Jumlah Bayar   :Rp. " << bayar << endl;
    cout << "==========================" << endl;
    getchar();
}