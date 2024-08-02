#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int AngkaHari;
    cout << "Input Angka Hari : ";
    cin >> AngkaHari;
    switch (AngkaHari)
    {
    case 1:
        cout << "SENIN";
        break;

    case 2:
        cout << "SELASA";
        break;

    case 3:
        cout << "RABU";
        break;

    case 4:
        cout << "KAMIS";
        break;

    case 5:
        cout << "JUMAT";
        break;

    case 6:
        cout << "SABTU";
        break;

    case 7:
        cout << "MINGGU";
        break;

    default:
        cout << "HARI YANG SALAH";
        break;
    }
    return 0;
}