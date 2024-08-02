#include <iostream>
using namespace std;

int main()
{
    int x, n;
    cout << "Masukkan Jumlah Baris : ";
    cin >> n;

    x = 1;
    while (x <= n)
    {
        cout << x << "Pemrograman C++" << endl;
        x = x + 1;
    }

    cout << endl;
    return 0;
}