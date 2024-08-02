#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char nama;
    int jp;
    int bn;
    cout << "Jumlah Penjualan Mobil:";
    cin >> jp;
    if (jp >= 3)
    {
        bn = 1000000;
    }
    else if (jp == 2)
    {
        bn = 500000;
    }
    else
    {
        bn = 100000;
    }
    cout << "Jumlah Bonus :" << bn << endl;
    getchar();
    return 0;
}

/*JP=Jumlah Pembelian
BN=Bonus*/