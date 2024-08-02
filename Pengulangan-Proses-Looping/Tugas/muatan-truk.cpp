#include <iostream>
using namespace std;

int main()
{
    int mangga, jeruk, jumlah;
    mangga = 10;
    jeruk = 15;

    cout << "NO KOTA\t\tMANGGA\t\tJERUK\t\tJUMLAH MUATAN" << endl;
    cout << "-------------------------------------------------------------" << endl;

    for (int kota = 1; kota <= 10; kota++)
    {
        jumlah = mangga + jeruk;
        cout << kota << "  Kota ke " << kota << "\t" << mangga << "\t\t" << jeruk << "\t\t" << jumlah << endl;

        // Update muatan untuk kota berikutnya
        mangga = mangga + 10;
        jeruk = jeruk + 10;
    }

    return 0;
}
