#include <iostream>
using namespace std;

int main()
{
    int pokok, bunga, bulan, total;

    pokok = 1000000;
    bulan = 0;
    bunga = 0;

    cout << "Bulan ke\tPokok\t\tBunga\t\tTotal" << endl;
    cout << "-------------------------------------------------------" << endl;

    while (bulan < 10)
    {
        bulan = bulan + 1;
        total = pokok + bunga;

        cout << bulan << "\t\t" << pokok << "\t\t" << bunga << "\t\t" << total << endl;

        pokok = total;
        bunga = .10 * pokok;
    }

    return 0;
}
