#include <iostream>

using namespace std;
int kuadrat(int x)
{
    int hasil = x * x;
    cout << hasil;
    return hasil;
}

// program utama
int main()
{
    int x;
    cout << "Masukkan Angka = ";
    cin >> x;
    kuadrat(x);
}