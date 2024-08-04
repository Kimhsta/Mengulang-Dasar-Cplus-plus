#include <iostream>
using namespace std;

void Vbalok(int vol)
{
    int p, l, t;

    cout << "Panjang = ";
    cin >> p;
    cout << "Lebar = ";
    cin >> l;
    cout << "Tinggi = ";
    cin >> t;

    vol = p * l * t;
    cout << "Volume Balok :" << vol;
}
main()
{
    int hasil;
    Vbalok(hasil);
}