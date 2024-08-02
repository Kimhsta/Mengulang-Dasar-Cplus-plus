#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int pil;
    cout << "===========MENU==========" << endl;
    cout << "       1. MAKANAN" << endl;
    cout << "       2. MINUMAN" << endl;
    cout << "=========================" << endl;
    cout << "   Input Pilihan [1..2] : ";
    cin >> pil;
    cout << endl;
    if (pil == 1)
    {
        cout << "==========MENU MAKANAN===========" << endl;
        cout << "1. Nasi Goreng Spesial - Rp15.000" << endl;
        cout << "2. Nasi Goreng Seafood - Rp25.000" << endl;
        cout << "3. Nasi Campur - Rp17.000" << endl;
        cout << "=================================" << endl;
        cout << "Masukkan Inputan [1..3] : ";
        cin >> pil;
        cout << endl;
        if (pil == 1)
        {
            cout << "Nasi Goreng Spesial" << endl;
            cout << "Harga: Rp15.000" << endl;
        }
        else if (pil == 2)
        {
            cout << "Nasi Goreng Seafood" << endl;
            cout << "Harga: Rp25.000" << endl;
        }
        else if (pil == 3)
        {
            cout << "Nasi Goreng Campur" << endl;
            cout << "Harga: Rp17.000" << endl;
        }
        else
        {
            cout << "Pilihan Hanya Ada Sampai 3";
        }
    }
    else if (pil == 2)
    {
        cout << "=====MENU MINUMAN=====" << endl;
        cout << "1. Es Teh - Rp3.000 " << endl;
        cout << "2. Es Kapal - Rp5.000" << endl;
        cout << "3. Es Buah - Rp10.000" << endl;
        cout << "======================" << endl;
        cout << "Masukkan Inputan [1..3] : ";
        cin >> pil;
        cout << endl;
        if (pil == 1)
        {
            cout << "Es Teh" << endl;
            cout << "Harga: Rp3.000" << endl;
        }
        else if (pil == 2)
        {
            cout << "Es Kapal" << endl;
            cout << "Harga: Rp5.000" << endl;
        }
        else if (pil == 3)
        {
            cout << "Es Buah" << endl;
            cout << "Harga: Rp10.000" << endl;
        }
        else
        {
            cout << "Pilihan Hanya Ada Sampai 3";
        }
    }
    else
    {
        cout << "Pilihan Anda Salah!!!";
    }
    return 0;
}

// pil= Pilihan