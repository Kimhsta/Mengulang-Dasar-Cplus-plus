#include <iostream>
using namespace std;

void Vbalok(int p, int l, int t)
{
    int vol;

    cout << "Panjang = ";
    cin >> p;
    cout << "Lebar = ";
    cin >> l;
    cout << "Tinggi = ";
    cin >> t;

    vol = p * l * t;
    cout << "Volume Balok = " << vol;
}

main()
{
    int pnj, lb, tg;
    Vbalok(pnj, lb, tg);
}