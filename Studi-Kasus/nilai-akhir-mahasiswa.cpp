#include <iostream>
using namespace std;

int main()
{
    int nab, ntb, ntu, nuas, na;
    int jnab, jntb, jntu, jnuas;
    cout << "Masukkan Nilai Absensi :";
    cin >> nab;
    cout << "Masukkan Nilai Tugas :";
    cin >> ntb;
    cout << "Masukkan Nilai UTS :";
    cin >> ntu;
    cout << "Masukkan Nilai UAS :";
    cin >> nuas;
    jnab = nab * 0.20;
    jntb = ntb * 0.25;
    jntu = ntu * 0.20;
    jnuas = nuas * 0.35;
    na = jnab + jntb + jntu + jnuas;
    cout << "Jumlah Nilai Akhir :" << na << endl;
    cout << "Horeeee!!!!" << endl;
    return 0;
}

/*
nab = Nilai Absensi
ntb = Nilai Tugas
ntu = Nilai UTS
nuas= Nilai UAS
na  = Nilai Akhir
*/
