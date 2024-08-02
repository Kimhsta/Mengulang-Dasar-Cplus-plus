#include <iostream>
#include <string>
using namespace std;

int main()
{
    char kgol;
    string nama;
    int gp, tj, gt;
    cout << "Nama Pegawai :";
    cin >> nama;
    cout << "Golongan :";
    cin >> kgol;

    // Menentukan gaji pokok berdasarkan golongan
    if (kgol == 'A')
    {
        gp = 500000;
    }
    else if (kgol == 'B')
    {
        gp = 400000;
    }
    else if (kgol == 'C')
    {
        gp = 300000;
    }
    else
    {
        gp = 200000;
    }

    // Menghitung tunjangan dan gaji total
    tj = gp * 0.10;
    gt = gp + tj;

    // Menampilkan tunjangan dan gaji total
    cout << "Tunjangan :" << tj << endl;
    cout << "Gaji Total :" << gt << endl;
    getchar();
}
