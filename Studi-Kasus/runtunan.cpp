#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // Deklarasi variabel
    int A, B, C, D;

    // Input bilangan yang diperiksa
    cout << "Input Nilai A :";

    // Merespon proses inputtan(mengambil/membaca nilai A)
    cin >> A;
    cout << "Nilai A :" << A << endl;
    B = A + 2;
    cout << "Nilai B :" << B << endl;
    C = A + 1;
    cout << "Nilai C :" << C << endl;
    D = A + B + C;
    cout << "Nilai D :" << D << endl;
    return 0;
}