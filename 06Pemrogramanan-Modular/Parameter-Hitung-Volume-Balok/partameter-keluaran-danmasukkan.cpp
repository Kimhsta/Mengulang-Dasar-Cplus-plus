#include <iostream>
using namespace std;

void volume(int &vol, int p, int l, int t)
{
    vol = p * l * t;
}

main()
{
    int pj, lb, tg, hsl;

    cout << "Pajang = ";
    cin >> pj;
    cout << "Lebar = ";
    cin >> lb;
    cout << "Tinggi = ";
    cin >> tg;

    volume(hsl, pj, lb, tg);
    cout << "\n  Hasil Hitungan Volume : " << hsl;
    return 0;
}