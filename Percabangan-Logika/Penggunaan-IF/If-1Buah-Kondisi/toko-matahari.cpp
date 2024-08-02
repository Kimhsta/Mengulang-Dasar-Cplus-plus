#include <iostream>
using namespace std;

int main()
{
    float hp, ds, hb;
    cout << "Masukkan Jumlah Pembelian :";
    cin >> hp;
    if (hp >= 100000)
    {
        ds = 0.10 * hp;
    }
    else
    {
        ds = 0.05 * hp;
    }
    hb = hp - ds;
    cout << "Jumlah Diskon :" << ds << endl;
    cout << "Jumlah Bayar :" << hb << endl;
    return 0;
}