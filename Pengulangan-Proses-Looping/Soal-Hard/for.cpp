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

    for (bulan = 1; bulan <= 10; bulan++)
    {
        total = pokok + bunga;

        cout << bulan << "\t\t" << pokok << "\t\t" << bunga << "\t\t" << total << endl;

        pokok = total;
        bunga = 0.10 * pokok;
    }
    return 0;
}
