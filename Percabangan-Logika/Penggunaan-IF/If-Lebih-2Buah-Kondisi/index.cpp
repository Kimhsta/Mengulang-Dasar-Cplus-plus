#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int bil;
    cout << "Input Bilangan :";

    // Memproses Proses Inputan (Memebaca/Mengabil Nilai)
    cin >> bil;

    // Mengecek nilai yang diinputkan dan memberikan output sesuai
    if (bil == 1)
    {
        cout << "Anda Menginputkan Bilangan 1";
    }
    else if (bil == 2)
    {
        cout << "Anda Menginputkan Bilangan 2";
    }
    else if (bil == 3)
    {
        cout << "Anda Menginputkan Bilangan 3";
    }
    else
    {
        cout << "Hanya Menghasilkan Output 1..3 Saja";
    }
    return 0;
}