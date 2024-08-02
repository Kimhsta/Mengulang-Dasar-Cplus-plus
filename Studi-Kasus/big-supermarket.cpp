#include <iostream>
using namespace std;

int main()
{
    int tb, pj, ds, by;
    cout << "Masukkan Jumlah Pembelian :";
    cin >> tb;
    pj = tb * 0.10;
    ds = tb * 0.20;
    by = (tb + pj) - ds;
    cout << "Jumlah Pajak :" << pj << endl;
    cout << "Jumlah Diskon :" << ds << endl;
    cout << "Jumlah Bayar :" << by << endl;
    return 0;
}